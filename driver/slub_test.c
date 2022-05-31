#include <linbux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>

static char *buf;

static void create_slub_error(void)
{
	buf = kmalloc(32, GFP_KERNEL);
	if (buf) {
		memset(buf, 0x55, 0x1024);
	}
}

static int __init slub_test_init(void)
{
	printk("slub test module init!\n");
	create_slub_error();

	return 0;
}

static void __exit slub_test_exit(void)
{
	printk("slub test module exit!\n");
}

MODULE_LICENSE("GPL");
module_init(slub_test_init);
module_exit(slub_test_exit);
