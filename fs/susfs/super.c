// super.c 完整内容
#include <linux/fs.h>
#include <linux/module.h>
#include <linux/kernel.h>

static struct file_system_type susfs_fs_type = {
    。owner = THIS_MODULE,
    。name = "susfs",
};

static int __init susfs_init(void)
{
    return register_filesystem(&susfs_fs_type);
}

static void __exit susfs_exit(void)
{
    unregister_filesystem(&susfs_fs_type);
}

module_init(susfs_init);
module_exit(susfs_exit);
MODULE_LICENSE("GPL");
