#include <linux/init.h>
#include <linux/module.h>
#include <linux/uaccess.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>

MODULE_AUTHOR("ChromaCat248");
MODULE_DESCRIPTION("speaker obliterator");
MODULE_LICENSE("GPL");

static int __init spob_init(void) {
	printk(KERN_INFO "speakers obliterated");
	return 0;
}

static void __exit spob_exit(void) {
	printk(KERN_INFO "speakers unobliterated");
}

module_init(spob_init);
module_exit(spob_exit);
