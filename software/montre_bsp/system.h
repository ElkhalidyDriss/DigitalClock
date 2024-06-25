/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'digiClk'
 * SOPC Builder design path: C:/altera/13.0sp1/digital_clk/digiClk.sopcinfo
 *
 * Generated: Sat Oct 28 16:11:06 CEST 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * 7_SEG_CONTROLLER configuration
 *
 */

#define SEG_CONTROLLER_BASE 0x1001040
#define SEG_CONTROLLER_IRQ -1
#define SEG_CONTROLLER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG_CONTROLLER_NAME "/dev/7_SEG_CONTROLLER"
#define SEG_CONTROLLER_SPAN 16
#define SEG_CONTROLLER_TYPE "altera_up_avalon_parallel_port"
#define ALT_MODULE_CLASS_7_SEG_CONTROLLER altera_up_avalon_parallel_port


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x1000820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x19
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x800020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x19
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_RESET_ADDR 0x800000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x1000820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x19
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x800020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x19
#define NIOS2_RESET_ADDR 0x800000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS
#define __ALTERA_UP_AVALON_PARALLEL_PORT


/*
 * KEY configuration
 *
 */

#define ALT_MODULE_CLASS_KEY altera_up_avalon_parallel_port
#define KEY_BASE 0x1001080
#define KEY_IRQ 1
#define KEY_IRQ_INTERRUPT_CONTROLLER_ID 0
#define KEY_NAME "/dev/KEY"
#define KEY_SPAN 16
#define KEY_TYPE "altera_up_avalon_parallel_port"


/*
 * LED_GREEN configuration
 *
 */

#define ALT_MODULE_CLASS_LED_GREEN altera_up_avalon_parallel_port
#define LED_GREEN_BASE 0x1001060
#define LED_GREEN_IRQ -1
#define LED_GREEN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_GREEN_NAME "/dev/LED_GREEN"
#define LED_GREEN_SPAN 16
#define LED_GREEN_TYPE "altera_up_avalon_parallel_port"


/*
 * LED_RED configuration
 *
 */

#define ALT_MODULE_CLASS_LED_RED altera_up_avalon_parallel_port
#define LED_RED_BASE 0x1001070
#define LED_RED_IRQ -1
#define LED_RED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_RED_NAME "/dev/LED_RED"
#define LED_RED_SPAN 16
#define LED_RED_TYPE "altera_up_avalon_parallel_port"


/*
 * SDRAM_CONTROLER configuration
 *
 */

#define ALT_MODULE_CLASS_SDRAM_CONTROLER altera_avalon_new_sdram_controller
#define SDRAM_CONTROLER_BASE 0x800000
#define SDRAM_CONTROLER_CAS_LATENCY 3
#define SDRAM_CONTROLER_CONTENTS_INFO
#define SDRAM_CONTROLER_INIT_NOP_DELAY 0.0
#define SDRAM_CONTROLER_INIT_REFRESH_COMMANDS 2
#define SDRAM_CONTROLER_IRQ -1
#define SDRAM_CONTROLER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_CONTROLER_IS_INITIALIZED 1
#define SDRAM_CONTROLER_NAME "/dev/SDRAM_CONTROLER"
#define SDRAM_CONTROLER_POWERUP_DELAY 100.0
#define SDRAM_CONTROLER_REFRESH_PERIOD 15.625
#define SDRAM_CONTROLER_REGISTER_DATA_IN 1
#define SDRAM_CONTROLER_SDRAM_ADDR_WIDTH 0x16
#define SDRAM_CONTROLER_SDRAM_BANK_WIDTH 2
#define SDRAM_CONTROLER_SDRAM_COL_WIDTH 8
#define SDRAM_CONTROLER_SDRAM_DATA_WIDTH 16
#define SDRAM_CONTROLER_SDRAM_NUM_BANKS 4
#define SDRAM_CONTROLER_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_CONTROLER_SDRAM_ROW_WIDTH 12
#define SDRAM_CONTROLER_SHARED_DATA 0
#define SDRAM_CONTROLER_SIM_MODEL_BASE 0
#define SDRAM_CONTROLER_SPAN 8388608
#define SDRAM_CONTROLER_STARVATION_INDICATOR 0
#define SDRAM_CONTROLER_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_CONTROLER_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_CONTROLER_T_AC 5.5
#define SDRAM_CONTROLER_T_MRD 3
#define SDRAM_CONTROLER_T_RCD 20.0
#define SDRAM_CONTROLER_T_RFC 70.0
#define SDRAM_CONTROLER_T_RP 20.0
#define SDRAM_CONTROLER_T_WR 14.0


/*
 * SWITCHES configuration
 *
 */

#define ALT_MODULE_CLASS_SWITCHES altera_up_avalon_parallel_port
#define SWITCHES_BASE 0x1001050
#define SWITCHES_IRQ 2
#define SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SWITCHES_NAME "/dev/SWITCHES"
#define SWITCHES_SPAN 16
#define SWITCHES_TYPE "altera_up_avalon_parallel_port"


/*
 * SYS_ID configuration
 *
 */

#define ALT_MODULE_CLASS_SYS_ID altera_avalon_sysid_qsys
#define SYS_ID_BASE 0x1001090
#define SYS_ID_ID 0
#define SYS_ID_IRQ -1
#define SYS_ID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYS_ID_NAME "/dev/SYS_ID"
#define SYS_ID_SPAN 8
#define SYS_ID_TIMESTAMP 1698501301
#define SYS_ID_TYPE "altera_avalon_sysid_qsys"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone II"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x1001098
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x1001098
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x1001098
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "digiClk"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x1001098
#define JTAG_UART_0_IRQ 3
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x1001020
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 0
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999999
#define TIMER_0_MULT 1.0
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "s"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1.0
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
