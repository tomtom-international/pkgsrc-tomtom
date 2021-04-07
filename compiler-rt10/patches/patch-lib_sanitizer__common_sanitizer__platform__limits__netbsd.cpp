$NetBSD: patch-lib_sanitizer__common_sanitizer__platform__limits__netbsd.cpp,v 1.2 2020/07/26 19:20:13 adam Exp $

urio and smb have been removed from NetBSD.

--- lib/sanitizer_common/sanitizer_platform_limits_netbsd.cpp.orig	2020-07-07 16:21:37.000000000 +0000
+++ lib/sanitizer_common/sanitizer_platform_limits_netbsd.cpp
@@ -166,7 +166,9 @@
 #include <netinet/ip_proxy.h>
 #include <netinet6/in6_var.h>
 #include <netinet6/nd6.h>
+#if __NetBSD_Version__ < 999000000
 #include <netsmb/smb_dev.h>
+#endif
 #include <dev/biovar.h>
 #include <dev/bluetooth/btdev.h>
 #include <dev/bluetooth/btsco.h>
@@ -190,7 +192,9 @@
 #include <dev/sun/vuid_event.h>
 #include <dev/tc/sticio.h>
 #include <dev/usb/ukyopon.h>
+#if __NetBSD_Version__ < 999000000
 #include <dev/usb/urio.h>
+#endif
 #include <dev/usb/usb.h>
 #include <dev/usb/utoppy.h>
 #include <dev/vme/xio.h>
@@ -672,12 +676,14 @@ unsigned struct_session_op_sz = sizeof(s
 unsigned struct_sgttyb_sz = sizeof(sgttyb);
 unsigned struct_sioc_sg_req_sz = sizeof(sioc_sg_req);
 unsigned struct_sioc_vif_req_sz = sizeof(sioc_vif_req);
+#if __NetBSD_Version__ < 999000000
 unsigned struct_smbioc_flags_sz = sizeof(smbioc_flags);
 unsigned struct_smbioc_lookup_sz = sizeof(smbioc_lookup);
 unsigned struct_smbioc_oshare_sz = sizeof(smbioc_oshare);
 unsigned struct_smbioc_ossn_sz = sizeof(smbioc_ossn);
 unsigned struct_smbioc_rq_sz = sizeof(smbioc_rq);
 unsigned struct_smbioc_rw_sz = sizeof(smbioc_rw);
+#endif
 unsigned struct_spppauthcfg_sz = sizeof(spppauthcfg);
 unsigned struct_spppauthfailuresettings_sz = sizeof(spppauthfailuresettings);
 unsigned struct_spppauthfailurestats_sz = sizeof(spppauthfailurestats);
@@ -702,7 +708,9 @@ unsigned struct_twe_drivecommand_sz = si
 unsigned struct_twe_paramcommand_sz = sizeof(twe_paramcommand);
 unsigned struct_twe_usercommand_sz = sizeof(twe_usercommand);
 unsigned struct_ukyopon_identify_sz = sizeof(ukyopon_identify);
+#if __NetBSD_Version__ < 999000000
 unsigned struct_urio_command_sz = sizeof(urio_command);
+#endif
 unsigned struct_usb_alt_interface_sz = sizeof(usb_alt_interface);
 unsigned struct_usb_bulk_ra_wb_opt_sz = sizeof(usb_bulk_ra_wb_opt);
 unsigned struct_usb_config_desc_sz = sizeof(usb_config_desc);
@@ -1291,8 +1299,10 @@ unsigned IOCTL_STICIO_RESET = STICIO_RES
 unsigned IOCTL_STICIO_STARTQ = STICIO_STARTQ;
 unsigned IOCTL_STICIO_STOPQ = STICIO_STOPQ;
 unsigned IOCTL_UKYOPON_IDENTIFY = UKYOPON_IDENTIFY;
+#if __NetBSD_Version__ < 999000000
 unsigned IOCTL_URIO_SEND_COMMAND = URIO_SEND_COMMAND;
 unsigned IOCTL_URIO_RECV_COMMAND = URIO_RECV_COMMAND;
+#endif
 unsigned IOCTL_USB_REQUEST = USB_REQUEST;
 unsigned IOCTL_USB_SETDEBUG = USB_SETDEBUG;
 unsigned IOCTL_USB_DISCOVER = USB_DISCOVER;
@@ -1677,6 +1687,7 @@ unsigned IOCTL_SIOCCONNECTXDEL = SIOCCON
 unsigned IOCTL_SIOCSIFINFO_FLAGS = SIOCSIFINFO_FLAGS;
 unsigned IOCTL_SIOCAADDRCTL_POLICY = SIOCAADDRCTL_POLICY;
 unsigned IOCTL_SIOCDADDRCTL_POLICY = SIOCDADDRCTL_POLICY;
+#if __NetBSD_Version__ < 999000000
 unsigned IOCTL_SMBIOC_OPENSESSION = SMBIOC_OPENSESSION;
 unsigned IOCTL_SMBIOC_OPENSHARE = SMBIOC_OPENSHARE;
 unsigned IOCTL_SMBIOC_REQUEST = SMBIOC_REQUEST;
@@ -1684,6 +1695,7 @@ unsigned IOCTL_SMBIOC_SETFLAGS = SMBIOC_
 unsigned IOCTL_SMBIOC_LOOKUP = SMBIOC_LOOKUP;
 unsigned IOCTL_SMBIOC_READ = SMBIOC_READ;
 unsigned IOCTL_SMBIOC_WRITE = SMBIOC_WRITE;
+#endif
 unsigned IOCTL_AGPIOC_INFO = AGPIOC_INFO;
 unsigned IOCTL_AGPIOC_ACQUIRE = AGPIOC_ACQUIRE;
 unsigned IOCTL_AGPIOC_RELEASE = AGPIOC_RELEASE;
