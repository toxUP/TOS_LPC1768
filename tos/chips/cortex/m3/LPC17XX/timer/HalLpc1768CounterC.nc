generic module HalLpc1768CounterAlarmC(typedef frequency_tag,
			      typedef timer_size @integer()) @safe()
{
  provides interface Counter<precision_tag, size_type> as Counter;
  uses interface HilLpc1768Timer as Timer;
  uses interface HilLpc1768Compare as Compare;
}
implementation
{
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