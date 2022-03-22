#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/uaccess.h>
#include <linux/init_task.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE1(wait_queue,void* __user,count)
{

    unsigned int tmp=0;
    tmp += current->nenwq;
    printk("Enter Wait Queue Times: %d",tmp);

    copy_to_user(count,&tmp,sizeof(unsigned int));

    return 0;
}
