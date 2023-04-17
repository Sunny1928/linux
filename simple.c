#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int sample_init(void)
{
	printk(KERN_INFO "Loading Kernel Module A1095550\n");

	return 0;
}

void sample_exit(void)
{
	printk(KERN_INFO "Removing Kernel Module A1095550\n");
}

module_init(sample_init);
module_exit(sample_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
