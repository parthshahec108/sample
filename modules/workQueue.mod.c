#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59caa4c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x68565378, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdab9e674, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92ae1f74, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D57300E5CA11A787A720185");
