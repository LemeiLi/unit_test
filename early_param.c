/*************************************************************************
	> File Name: early_param.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 19 Oct 2021 02:55:58 PM CST
 ************************************************************************/

#define __setup_param(str, unique_id, fn, early)            \
	static const char __setup_str_##unique_id[] __initconst     \
    __aligned(1) = str;                     \
    static struct obs_kernel_param __setup_##unique_id      \
    __used __section(.init.setup)               \
    __attribute__((aligned((sizeof(long)))))        \
        = { __setup_str_##unique_id, fn, early }
    
#define __setup(str, fn)                        \
	__setup_param(str, fn, fn, 0)
    
#define early_param(str, fn)                        \
	__setup_param(str, fn, fn, 1)

static int __init loglevel(vhar *str)
{
	int newlevel;

	if (get_option(&str, &newlevel)) {
		console_loglevel = newlevel;

		return 0;
	}

	return -EINVAL;
}

early_param("loglevel", loglevel);

int main()
{


}


