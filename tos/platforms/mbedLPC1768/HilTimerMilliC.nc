/** 
 * @author Thomas Schmid [sam3 adaption]
 *
 */

#include "Timer.h"

configuration HilTimerMilliC
{
  provides 
  {
      interface Init;
      interface Timer<TMilli> as TimerMilli[ uint8_t num ];
      interface LocalTime<TMilli>;
  }
}

implementation
{
  components new VirtualizeTimerC(TMilli,uniqueCount(UQ_TIMER_MILLI));
  components new AlarmToTimerC(TMilli);
  components new AlarmMilliC();
  components HalLpc1768RtcC; // 

  components new CounterToLocalTimeC(TMilli); // ????

  Init = HalLpc1768RtcC;
  TimerMilli = VirtualizeTimerC.Timer;
  LocalTime = HalLpc1768RtcC;
  
  VirtualizeTimerC.TimerFrom -> AlarmToTimerC.Timer;
  AlarmToTimerC.Alarm -> AlarmMilliC.Alarm;
}
