/**
 * @file simple_hello_world.c
 * @author Thomas Brandstaetter
 */


#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>


static int __init
hello_init(void)
{
    printk(KERN_INFO "%s", "Hello world\n");
    return 0;
}

static void __exit
hello_cleanup(void)
{
    printk(KERN_INFO "%s", "Goodby world");
}

module_init(hello_init);
module_exit(hello_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Brandstätter");
MODULE_DESCRIPTION("Classic hello world kernel module");
MODULE_VERSION("1.0");
