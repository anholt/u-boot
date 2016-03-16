/*
 * (C) Copyright 2012-2016 Stephen Warren <swarren@wwwdotorg.org>
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_BCM2837
#define CONFIG_SYS_CACHELINE_SIZE		64
/*
 * VC FW needs kernel_old=1 in config.txt to boot AArch64 code at present,
 * since it contains no AArch64 setup code, and that option means a load
 * address of 0.
 */
#define CONFIG_SYS_TEXT_BASE			0x00000000
/*
 * FIXME: Put this somewhere sane. 0x100-n would make sense once we don't need
 * kernel_old=1, or if we leave a hole in the binary.
 */
#define CPU_RELEASE_ADDR			0x0FFFFFF0

#include "rpi-common.h"

#endif
