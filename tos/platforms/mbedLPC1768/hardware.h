/**
 * Definitions of stuff specific to the LPC1768 board.
 * Includes definitions for the NXP LPC1768 MCU. (Adaption from SAM3S MCU)
 *
 * @author Magnus Sundal <mvsundal@outlook.com>
 */

#ifndef HARDWARE_H
#define HARDWARE_H

#include "mbed.h"

// #define this so we don't doubly define time_t with conflicting types
// in SD card implementation Time.h file
#define __time_t_defined
#include <sys/types.h>

#ifndef PLATFORM_BAUDRATE
#define PLATFORM_BAUDRATE (57600) /* Supported: 110, 300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 38400, 57600, 115200, 230400, 460800, 921600 */
#endif

#define IRQ_PRIO_UDPHS    (0x81)
#define IRQ_PRIO_TWI1     (0x82)
#define IRQ_PRIO_TWI0     (0x83)
#define IRQ_PRIO_DMAC     (0x84)
#define IRQ_PRIO_ADC      (0x85)
#define IRQ_PRIO_DAC      (0x85)
#define IRQ_PRIO_PWM      (0x85)
#define IRQ_PRIO_PIO      (0x86)
#define IRQ_PRIO_SPI      (0x87)
#define IRQ_PRIO_UART     (0x88)
#define IRQ_PRIO_USART0   (0x89)
#define IRQ_PRIO_USART1   (0x90)
#define IRQ_PRIO_USART2   (0x91)
#define IRQ_PRIO_HSMCI    (0x92)

#endif // HARDWARE_H
