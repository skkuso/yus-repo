/**
 * \file
 *
 * \brief Autogenerated API include file for the Atmel Software Framework (ASF)
 *
 * Copyright (c) 2012 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef ASF_H
#define ASF_H

/*
 * This file includes all API header files for the selected drivers from ASF.
 * Note: There might be duplicate includes required by more than one driver.
 *
 * The file is automatically generated and will be re-written when
 * running the ASF driver selector tool. Any changes will be discarded.
 */

// From module: ACIFB - Analog Comparator Interface
#include <acifb.h>

// From module: ADCIFB - ADC Interface B
#include <adcifb.h>

// From module: AST - Asynchronous Timer
#include <ast.h>

// From module: CPU Cycle Counter
#include <cycle_counter.h>

// From module: CPU Reset Cause
#include <avr32_reset_cause.h>

// From module: Calendar functionality
#include <calendar.h>

// From module: Chip Reset Cause Access - UC3 implementation
#include <reset_cause.h>

// From module: Common build items for user board support templates
#include <user_board.h>

// From module: Compiler abstraction layer and code utilities
#include <compiler.h>
#include <status_codes.h>

// From module: DLMALLOC - Dynamic memory allocation
#include <dlmalloc.h>

// From module: DSP - Digital signal processing library
#include <dsp.h>

// From module: DSPLIB - Common files
#include <dsp.h>

// From module: Debug macros and functions
#include <debug.h>

// From module: Delay routines
#include <delay.h>

// From module: EIC - External Interrupt Controller
#include <eic.h>

// From module: External oscillator frequency detection
#include <freq_detect.h>

// From module: FAT file system
#include <fat.h>
#include <file.h>
#include <fs_com.h>
#include <navigation.h>

// From module: FAT file system with POSIX API support
#include <fsaccess.h>

// From module: FAT file system with default automatic navigation
#include <nav_automatic.h>
#include <play_list.h>

// From module: FAT file system with flat navigation
#include <nav_flat.h>

// From module: FAT file system with navigation filtered in flat mode
#include <nav_filterflat.h>

// From module: FAT file system with navigation filtered in list
#include <nav_filterlist.h>

// From module: FAT file system with text file support
#include <reader_txt.h>

// From module: FAT file system with unicode support
#include <unicode.h>

// From module: FIFO - First-In-First-Out circular buffer
#include <fifo.h>

// From module: FLASH Controller Double-Word (FLASHCDW)
#include <flashcdw.h>

// From module: FREQM - Frequency Meter
#include <freqm.h>

// From module: GFX Color - Color Graphic Library
#include <gfx.h>

// From module: GFX Color - System Font
#include <sysfont.h>

// From module: GPIO - General-Purpose Input/Output
#include <gpio.h>

// From module: Generic board support
#include <board.h>

// From module: Generic components of unit test framework
#include <unit_test/suite.h>

// From module: Graphical Widget Library Toolkit
#include <win.h>
#include <wtk.h>

// From module: INTC - Interrupt Controller
#include <intc.h>

// From module: IOPORT - General purpose I/O service
#include <ioport.h>

// From module: Interrupt management - UC3 implementation
#include <interrupt.h>

// From module: LCD - ILI9341 Display Controller
#include <ili9341.h>

// From module: LodePNG PNG Decoder
#include <lodepng.h>

// From module: MEMBAG Memory Bag Allocator
#include <membag.h>

// From module: MPU - Memory Protection Unit
#include <mpu.h>

// From module: Memory Control Access Interface
#include <ctrl_access.h>

// From module: Newlib addons library
#include <nlao_cpu.h>
#include <nlao_exceptions.h>
#include <nlao_interrupts.h>
#include <nlao_io.h>
#include <nlao_usart.h>

// From module: PDCA - Peripheral DMA Controller
#include <pdca.h>

// From module: PM Power Manager - UC3 L0 implementation
#include <power_clocks_lib.h>
#include <sleep.h>

// From module: PWMA - Pulse Width Modulation A
#include <pwma.h>

// From module: Part identification macros
#include <parts.h>

// From module: PolarSSL - Small Cryptographic and SSL/TLS Library
#include <polarssl/aes.h>
#include <polarssl/arc4.h>
#include <polarssl/base64.h>
#include <polarssl/bignum.h>
#include <polarssl/bn_mul.h>
#include <polarssl/camellia.h>
#include <polarssl/certs.h>
#include <polarssl/config.h>
#include <polarssl/debug.h>
#include <polarssl/des.h>
#include <polarssl/dhm.h>
#include <polarssl/havege.h>
#include <polarssl/md2.h>
#include <polarssl/md4.h>
#include <polarssl/md5.h>
#include <polarssl/padlock.h>
#include <polarssl/rsa.h>
#include <polarssl/sha1.h>
#include <polarssl/sha2.h>
#include <polarssl/sha4.h>
#include <polarssl/ssl.h>
#include <polarssl/timing.h>
#include <polarssl/x509.h>
#include <polarssl/xtea.h>

// From module: QTouch Sensor with I2C interface
#include <QT2160.h>
#include <qt_i2c.h>

// From module: SCIF System Control Interface - UC3L implementation
#include <scif_uc3l.h>

// From module: SD/MMC card access using SPI
#include <sd_mmc_spi.h>
#include <sd_mmc_spi_mem.h>

// From module: SD/MMC stack on SPI interface
#include <sd_mmc.h>

// From module: SPI - Serial Peripheral Interface
#include <spi.h>

// From module: SPI - UC3 implementation
#include <usart_spi.h>
#include <usart_spi.h>

// From module: Sensors - Common Sensor Service
#include <sensor.h>

// From module: Sleep manager - UC3 implementation
#include <sleepmgr.h>
#include <uc3/sleepmgr.h>

// From module: Standard serial I/O (stdio) - UC3 implementation
#include <stdio_serial.h>

// From module: System Clock Control - UC3 L0 with PLL implementation
#include <sysclk.h>

// From module: TC - Timer/Counter
#include <tc.h>

// From module: TWI - Two-Wire Interface - UC3 A3/A4/C/D/L implementation
#include <twi_master.h>
#include <uc3_twim/twi_master.h>

// From module: TWI - Two-Wire Master Interface
#include <twim.h>

// From module: TWI - Two-Wire Slave Interface
#include <twis.h>

// From module: USART - Serial interface - UC3 implementation
#include <serial.h>

// From module: USART - Universal Synchronous/Asynchronous Receiver/Transmitter
#include <usart.h>

// From module: USART Debug strings
#include <print_funcs.h>

// From module: Virtual Memory in RAM
#include <virtual_mem.h>

// From module: WDT Watchdog Timer - UC3 C/L implementation
#include <wdt.h>

// From module: maXTouch - mXT143E Controller
#include <mxt_device.h>

#endif // ASF_H