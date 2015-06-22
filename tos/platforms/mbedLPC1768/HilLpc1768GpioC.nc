/**
 * Platform-specific LED interface.
 *
 * @author Martin Turon <mturon@xbow.com>
 */

#include "hardware.h"

generic module HilLpc1768GpioC
{
  provides interface GeneralIO;
  provides interface GpioInterrupt;
  uses interface HplLpc1768GeneralIO as LPC1768GeneralIO;
  uses interface HplLpc1768GGpioInterrupt as LPC1768GpioInterrupt;
  uses interface Init;
}
implementation
{
  .
  .
  .
}
