/*
 * stm32f446xx.h
 *
 *  Created on: 2021. 3. 6.
 *      Author: JKwan
 */

#ifndef STM32F446XX_H_
#define STM32F446XX_H_

/*
 * base addresses of Flash and SRAM memories
 */
#define FLASH_BASEADDR				0x08000000U		// Main memory
#define SRAM1_BASEADDR				0x20000000U		// 112 KB = 0x1C000
#define SRAM2_BASEADDR				0x2001C000U
#define ROM							0x1FFF0000U		// system memory
#define SRAM 						SRAM1_BASEADDR


#endif /* STM32F446XX_H_ */
