
# BASEINCLUDE ?= /home/caesar/xxdk/cv22_v2.0/ambarella/kernel/linux-4.14
# BASEINCLUDE ?= /home/caesar/xxdk/cv22_v2.0/ambarella/out/cv22_walnut/kernel/linux-4.14_emmc


BASEINCLUDE ?= /home/caesar/xxdk/cv22_v2.0/ambarella/boards/cv22_walnut
slub_test-objs := slub_test.o
obj-m := slub_test.o

all:
	$(MAKE) -C $(BASEINCLUDE) SUBDIRS=$(PWD) modules

clean:
	$(MAKE) -C $(BASEINCLUDE) SUBDIRS=$(PWD) clean
	rm -f *.ko
