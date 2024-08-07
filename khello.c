#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init khello(void)
{
    printk(KERN_INFO "Fadhil run at kernelspace\n");
    return 0;
}

static void __exit khello_exit(void)
{
    printk(KERN_INFO "khello exiting\n");
}

module_init(khello);
module_exit(khello_exit);

MODULE_LICENSE("GPL-3.0");
MODULE_AUTHOR("fadhil riyanto");
MODULE_DESCRIPTION("simple hello kernel module");