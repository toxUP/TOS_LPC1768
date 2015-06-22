// Connecting generic and chip-specific timing interfaces
// + private module generates an alarm and counter from the HW timer
generic configuration HalLpc1768CounterAlarmC(typedef precision, int divider) {
  provides {
    interface Init @atleastonce();
    interface Alarm<precision, uint32_t>;
    interface Counter<precision, uint32_t>;
  }
}
implementation
{
  components new HalLpc1768CounterAlarmP(precision, divider),
    HplLpc1768TimerC;

  Init    = HalLpc1768CounterAlarmP;
  Alarm   = HalLpc1768CounterAlarmP;
  Counter = HalLpc1768CounterAlarmP;

  HalLpc1768CounterAlarmP.Timer      -> HplLpc1768TimerC;
  HalLpc1768CounterAlarmP.Compare    -> HplLpc1768TimerC;
}
