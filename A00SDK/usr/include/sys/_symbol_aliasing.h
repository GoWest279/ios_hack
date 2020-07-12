/* Copyright (c) 2010 Apple Inc. All rights reserved.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

#ifndef _CDEFS_H_
# error "Never use <sys/_symbol_aliasing.h> directly.  Use <sys/cdefs.h> instead."
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 20100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 20200
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 30000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 30100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 30200
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 40000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 40100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 40200
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 40300
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 50000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 50100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 60000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 60100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 70000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 70100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 80000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x)
#endif

#if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 80100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1010
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1020
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1030
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1040
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1050
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1060
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1070
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1080
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1090
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x)
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 10100
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#else
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x)
#endif
