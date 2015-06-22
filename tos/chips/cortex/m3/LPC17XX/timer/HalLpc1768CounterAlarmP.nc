generic module HalLpc1768CounterAlarmP(typedef frequency_tag,
			      typedef timer_size @integer()) @safe()
{
  provides {
    interface Init;
    interface Alarm<precision_tag, size_type> as Alarm;
    interface Counter<precision_tag, size_type> as Counter;
    }
  uses {
    interface HplLpc1768TimerIf as Timer;
    interface HplLpc1768CompareIf as Compare;
    }
}
implementation
{
    /* Configure timer 0 */
  command error_t Init.init() {
    atomic
      {
  Atm128TimerControl_t x;

  call TimerAsync.setTimer0Asynchronous();
  x.flat = 0;
  x.bits.cs = divider;
  x.bits.wgm1 = 1; /* We use the clear-on-compare mode */
  call TimerCtrl.setControl(x);
  call Compare.set(MAXT); /* setInterrupt needs a valid value here */
  call Compare.start();
      }
    setInterrupt();
    return SUCCESS;
  }


  async command timer_size Counter.get()
  {
    return call Timer.get();
  }

  async command bool Counter.isOverflowPending()
  {
    return call Timer.test();
  }

  async command void Counter.clearOverflow()
  {
    call Timer.reset();
  }

  async event void Timer.overflow()
  {
    signal Counter.overflow();
  }
}