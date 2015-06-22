/*
* HPL interface for LPC1768 32-bit timer 1 out of 4.
* The four timers are identical, except for the peripheral address. 
* These are designed to count cycles of PCLK or an externally-supplied clock.
* Four 32-bit match registers per timer.
*/
configuration HplLpc1768TimerC
{
  provides {
  	interface {
  		HplLpc1768Timer     as Timer;
  		HplLpc1768TimerCtrl as TimerCtrl;
  		HplLpc1768Capture   as Capture;
  		HplLpc1768Compare   as Compare;
  	}
  }
}
implementation
{
  components HplLpc1768Timer0P;

  Timer      = HplLpc1768Timer0P;
  TimerCtrl  = HplLpc1768Timer0P;

  Capture[0] = HplLpc1768Timer0P.CaptureA;
  Capture[1] = HplLpc1768Timer0P.CaptureB;

  Compare[0] = HplLpc1768Timer0P.CompareA;
  Compare[1] = HplLpc1768Timer0P.CompareB;
  Compare[2] = HplLpc1768Timer0P.CompareC;
  Compare[3] = HplLpc1768Timer0P.CompareD;
}