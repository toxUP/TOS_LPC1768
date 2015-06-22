/**
 * Platform-specific LED interface.
 *
 * @author Martin Turon <mturon@xbow.com>
 */

#include "hardware.h"

configuration PlatformLedsC
{
  provides interface HplLpc1768GeneralIO as Led0;
  provides interface HplLpc1768GeneralIO as Led1;
  provides interface HplLpc1768GeneralIO as Led2;
  uses interface Init;
}
implementation
{
  components HplLpc1768GeneralIOC as IO;
  components PlatformP;

  Init = PlatformP.MoteInit;

  Led0 = IO.Led1;  // Pin A2 = Red LED
  Led1 = IO.Led2;  // Pin A1 = Green LED
  Led2 = IO.Led3;  // Pin A0 = Yellow LED
}
