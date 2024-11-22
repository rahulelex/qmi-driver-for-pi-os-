#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb7b3abdc, "module_layout" },
	{ 0x9b4af0ab, "param_ops_uint" },
	{ 0x4f88d7e4, "usbnet_tx_timeout" },
	{ 0xc6965e53, "usbnet_change_mtu" },
	{ 0x17b361b1, "eth_validate_addr" },
	{ 0xe25a809f, "usbnet_start_xmit" },
	{ 0x355eafdb, "usbnet_stop" },
	{ 0x42021187, "usbnet_open" },
	{ 0x88b95b8b, "usb_deregister" },
	{ 0xdf34417e, "usb_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdcb764ad, "memset" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9660b4a5, "cpu_hwcaps" },
	{ 0xb384ca2e, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6025051, "netif_device_attach" },
	{ 0xd2661387, "register_netdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f5a909d, "alloc_etherdev_mqs" },
	{ 0x977b2fa3, "usbnet_probe" },
	{ 0xcdb77171, "usbnet_skb_return" },
	{ 0x125055a, "netif_rx" },
	{ 0x53933fac, "eth_type_trans" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2c811f39, "skb_put" },
	{ 0x49436d5d, "__netdev_alloc_skb" },
	{ 0xa9655ad2, "netif_carrier_on" },
	{ 0x3f37567a, "__dev_kfree_skb_any" },
	{ 0x63abdb3d, "dev_queue_xmit" },
	{ 0xd4ad597, "skb_push" },
	{ 0x4ff6591b, "skb_pull" },
	{ 0xe6cc4045, "usbnet_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0xe0024944, "free_netdev" },
	{ 0x1de581cb, "unregister_netdev" },
	{ 0x16cc7658, "netif_carrier_off" },
	{ 0xbd2d937f, "usbnet_suspend" },
	{ 0x35c75db5, "usbnet_resume" },
	{ 0x89bdeaa2, "usb_control_msg" },
	{ 0x63b34040, "_dev_err" },
	{ 0x5ec8c7c, "kmem_cache_alloc_trace" },
	{ 0x73dc14a, "kmalloc_caches" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2d237387, "usb_cdc_wdm_register" },
	{ 0x3b8c1cfc, "usbnet_get_endpoints" },
	{ 0x9a015021, "usb_driver_claim_interface" },
	{ 0xdef8e1b8, "usbnet_get_ethernet_addr" },
	{ 0xeb91e9c, "usb_ifnum_to_if" },
	{ 0x5ea763da, "eth_commit_mac_addr_change" },
	{ 0x7fae9d65, "eth_prepare_mac_addr_change" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x463518d8, "usb_driver_release_interface" },
	{ 0x5ecf6811, "usb_autopm_put_interface" },
	{ 0x7826133b, "__dynamic_dev_dbg" },
	{ 0x1c5ece66, "usb_autopm_get_interface" },
	{ 0x4d7b59d, "_dev_info" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "cdc-wdm");

MODULE_ALIAS("usb:v05C6p9003d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9215d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0125d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0121d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0195d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0306d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0512d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0296d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0435d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0620d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0800d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0122d*dc*dsc*dp*ic*isc*ip*in04*");

MODULE_INFO(srcversion, "0E3CDF21AD5066F43EFED5D");
