/**
 * Adapted from SAM3S_EK
 */

#include "hardware.h" // IRQ

module PlatformP
{
    provides
	{
        interface Init;
    }
	uses
	{
		interface Init as LedsInit;
        interface Init as MoteClockInit;
        interface Init as IRQInit;
        interface Init as MoteTimerInit;
        interface Sam3LowPower;
	}
}

implementation
{
	command error_t Init.init()
	{
		/* I/O pin configuration, clock calibration, and LED configuration
		 * (see TEP 107)
		 */
		call IRQInit.init();
    call MoteClockInit.init();
    call MoteTimerInit.init();
		call LedsInit.init();

		return SUCCESS;
	}

    async event void Sam3LowPower.customizePio() {
        // currently not optimized for sam3s-ek
    }

	default command error_t LedsInit.init()
	{
		return SUCCESS;
	}
}
