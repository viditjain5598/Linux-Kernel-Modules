#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

#define DEVICE_NAME "rickroll"

static int __init rickroll_init(void){
	printk(KERN_INFO "Rickroll module has been loaded\n");
	return 0;
}

static void __exit rickroll_exit(void){
	printk(KERN_INFO "Rickroll module has been unloaded\n");
}

module_init(rickroll_init);
module_exit(rickroll_exit);