#include <linux/init.h>
#include <linux/module.h>
#include <linux/blkdev.h>

#define MAJOR_NUMBER 251
#define NAME "blk_dev"

MODULE_LICENSE("Dual BSD/GPL");

struct sbull_dev {
	int size;
	u8 *data;
	short users;
	short media_change;
	spinlock_t lock;
	struct request_queue *queue;
	struct gendisk *gd;
	struct timer_list timer;
};

struct sbull_dev *dev;

static int hello_init(void)
{
	printk(KERN_ALERT "Hello, world\n");
	register_blkdev(MAJOR_NUMBER, NAME);

	memset (dev, 0, sizeof (struct sbull_dev));
	//dev->size = nsectors*hardsect_size;
	dev->size = 8*512;
	dev->data = vmalloc(dev->size);
	if (dev->data == NULL) {
		printk (KERN_NOTICE "vmalloc failure.\n");
		return;
	}
	spin_lock_init(&dev->lock);

	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world\n");
	unregister_blkdev(MAJOR_NUMBER, NAME);
}

module_init(hello_init);
module_exit(hello_exit);

