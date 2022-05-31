/*************************************************************************
	> File Name: test_ftrace.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 09 Sep 2021 03:32:10 PM CST
 ************************************************************************/

#include <stdio.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int delaytime(int t) {
        int i, j;
        for (i = 0; i < t; i++)
                for (j = 0; j < 5000; j++);
}

int main() {
        struct timeval tv1, tv2;
        int fd_sched = open("/sys/kernel/debug/tracing/events/sched/enable", O_CREAT | O_RDWR, 0666);
        int fd_irq = open("/sys/kernel/debug/tracing/events/irq/enable", O_CREAT | O_RDWR, 0666);
        int fd_mark = open("/sys/kernel/debug/tracing/trace_marker", O_CREAT | O_RDWR, 0666);
        int fd_trace = open("/sys/kernel/debug/tracing/tracing_on", O_CREAT | O_RDWR, 0666);

        write(fd_trace, "1", 2); // enable ftrace
        write(fd_sched, "1", 2); // enable sched event
        write(fd_irq, "1", 2); // enable irq event

        while (1) {
                gettimeofday(&tv1, NULL);
                write(fd_mark, "start delay", 12); // add mark
                delaytime(100);
                write(fd_mark, "end delay", 12); // end mark
                gettimeofday(&tv2, NULL);

                if ((1000000 * (tv2.tv_sec - tv1.tv_sec) + (tv2.tv_usec - tv1.tv_usec)) > 10000) {
                        printf("break!\n");
                        write(fd_trace, "1", 2); // find something wrong， stop ftrace
                        write(fd_sched, "0", 2);
                        write(fd_irq, "0", 2);
                        break;
                }
        }
        close(fd_mark);
        close(fd_trace);
        close(fd_sched);
        close(fd_irq);

		return 0;
}
