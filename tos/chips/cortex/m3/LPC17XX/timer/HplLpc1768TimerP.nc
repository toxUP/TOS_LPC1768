/*
* HPL internal component for LPC1768 32-bit timer 1 out of 4.
* The four timers are identical, except for the peripheral address. 
* These are designed to count cycles of PCLK or an externally-supplied clock.
* Four 32-bit match registers per timer.
*/

#include <mbed.h>

module HplLpc1768TimerP
{
  provides {
  	interface {
  		HplLpc1768Timer     as Timer;
  		HplLpc1768TimerCtrl as TimerCtrl;
  		HplLpc1768Capture   as CaptureA;
      HplLpc1768Capture   as CaptureB;
  		HplLpc1768Compare   as CompareA;
      HplLpc1768Compare   as CompareB;
      HplLpc1768Compare   as CompareC;
      HplLpc1768Compare   as CompareD;
  	  }
    }
  }
implementation
{
  //=== Read the current timer value. ===================================
  async command uint32_t Timer.get() { return LPC_TIM0 -> TC; }

  //=== Set/clear the current timer value. ==============================
  //async command void Timer.clr(uint32_t t) { LPC_TIM0 -> TCR |= 1 << 1; }
  async command void Timer.clr() { LPC_TIM0 -> TCR |= 1 << 1; } //(NO SET FUNC?)

  //=== Read the current timer prescale value. ==========================
  async command uint32_t Timer.getScale() { return LPC_TIM0 -> PR; }

  //=== Write a new timer prescale. =====================================
  async command void Timer.setScale(uint32_t s) { LPC_TIM0 -> PR = s }

  //=== Turn off the timer. =============================================
  async command void Timer.off() { LPC_TIM0 -> TCR &= 0 << 0; }

  //=== Timer 32-bit implementation. ===================================
  async command void Timer.reset()    { 
    LPC_TIM0 -> TCR |= 1 << 1; // Enable counter reset
    }
  async command void CaptureA.reset() { 
    LPC_TIM0 -> CCR &= 0 << 0; // Disable edge capture
    LPC_TIM0 -> CCR &= 0 << 2; // Disable interrupt on CAP0.0
    }
  async command void CaptureB.reset() { 
    LPC_TIM0 -> CCR &= 0 << 3; // Disable edge capture
    LPC_TIM0 -> CCR &= 0 << 5; // Disable interrupt on CAP0.1
    }
  async command void CompareA.reset() { LPC_TIM0 -> MR0 = 0x00000000;  }
  async command void CompareB.reset() { LPC_TIM0 -> MR1 = 0x00000000;  }
  async command void CompareC.reset() { LPC_TIM0 -> MR2 = 0x00000000;  }
  async command void CompareD.reset() { LPC_TIM0 -> MR3 = 0x00000000;  }

  async command void Timer.start()    { 
    LPC_TIM0 -> TCR |= 1 << 0; // Timer Counter + Prescaler enabled 
    LPC_TIM0 -> TCR &= 0 << 1; // Disable counter reset
    NVIC_EnableIRQ(TIMER0_IRQn); // Enable timer interrupt
    }
  async command void CaptureA.start()  { 
    LPC_TIM0 -> CCR |= 1 << 0; // Capture on rising edge
    LPC_TIM0 -> CCR |= 1 << 2; // Enable interrupt on CAP0.0
    }
  async command void CaptureB.start()  { 
    LPC_TIM0 -> CCR |= 1 << 3; // Capture on rising edge
    LPC_TIM0 -> CCR |= 1 << 5; // Enable interrupt on CAP0.1
    }
  async command void CompareA.start() { 
    LPC_TIM0 -> MCR |= 1 << 0; // Interrupt on Match0 compare
    }
  async command void CompareB.start() { 
    LPC_TIM0 -> MCR |= 1 << 3; // Interrupt on Match1 compare
    }
  async command void CompareC.start() { 
    LPC_TIM0 -> MCR |= 1 << 6; // Interrupt on Match2 compare
    }
  async command void CompareD.start() { 
    LPC_TIM0 -> MCR |= 1 << 9; // Interrupt on Match3 compare
    }

  async command void Timer.stop()    { 
    LPC_TIM0 -> TCR &= 0 << 0; // Timer Counter + Prescaler DISABLED 
    }
  async command void CaptureA.stop()  {
    LPC_TIM0 -> CCR &= 0 << 2; // Disable interrupt on CAP0.0 
    }
  async command void CaptureB.stop()  {
    LPC_TIM0 -> CCR &= 0 << 5; // Disable interrupt on CAP0.1 
    }
  async command void CompareA.stop() { 
    LPC_TIM0 -> MCR &= 0 << 0; // Disable Interrupt on Match0 compare
    }
  async command void CompareB.stop() { 
    LPC_TIM0 -> MCR &= 0 << 3; // Disable Interrupt on Match1 compare
    }
  async command void CompareC.stop() { 
    LPC_TIM0 -> MCR &= 0 << 6; // Disable Interrupt on Match2 compare
    }
  async command void CompareD.stop() { 
    LPC_TIM0 -> MCR &= 0 << 9; // Disable Interrupt on Match3 compare
    }
return(((LPC_GPIO0 -> FIOPIN) & !(LPC_GPIO0 -> FIOMASK)) ? 1 : 0)
  //=== Read the compare registers. =====================================
  async command uint32_t CompareA.get() { return LPC_TIM0 -> MR0; }
  async command uint32_t CompareB.get() { return LPC_TIM0 -> MR1; }
  async command uint32_t CompareC.get() { return LPC_TIM0 -> MR2; }
  async command uint32_t CompareD.get() { return LPC_TIM0 -> MR3; }
  //=== Write the compare registers. ====================================
  async command void CompareA.set(uint32_t t) { LPC_TIM0 -> MR0 = t; }
  async command void CompareB.set(uint32_t t) { LPC_TIM0 -> MR1 = t; }
  async command void CompareC.set(uint32_t t) { LPC_TIM0 -> MR2 = t; }
  async command void CompareD.set(uint32_t t) { LPC_TIM0 -> MR3 = t; }
  //=== Check compare register status. ==================================
  async command bool CompareA.isOn() {return ((( LPC_TIM0 -> MCR) & (0x00000001) ? 1 : 0) }
  async command bool CompareB.isOn() {return ((( LPC_TIM0 -> MCR) & (0x00000008) ? 1 : 0) }
  async command bool CompareC.isOn() {return ((( LPC_TIM0 -> MCR) & (0x00000040) ? 1 : 0) }
  async command bool CompareD.isOn() {return ((( LPC_TIM0 -> MCR) & (0x00000200) ? 1 : 0) }

  //=== Read the capture registers. =====================================
  async command uint32_t CaptureA.get() { return LPC_TIM0 -> CR0; }
  async command uint32_t CaptureB.get() { return LPC_TIM0 -> CR1; }
  //=== Write the capture registers. ====================================
  async command void CaptureA.set(uint32_t t) { LPC_TIM0 -> CR0 = t; }
  async command void CaptureB.set(uint32_t t) { LPC_TIM0 -> CR1 = t; }
  //=== Check capture register status. ==================================  
  async command bool CaptureA.isOn() {return ((( LPC_TIM0 -> CCR) & (0x00000004) ? 1 : 0) }
  async command bool CaptureB.isOn() {return ((( LPC_TIM0 -> CCR) & (0x00000020) ? 1 : 0) }
  //=== Set edge to capture. ============================================  
  async command void CaptureA.setEdge(bool up) {
    if (up) {
      LPC_TIM0 -> CCR |= 1 << 0; // Enable rising edge 
      LPC_TIM0 -> CCR &= 0 << 1; // Disable falling edge 
      }
    if (!up) {
      LPC_TIM0 -> CCR &= 0 << 0; // Disable rising edge 
      LPC_TIM0 -> CCR |= 1 << 1; // Enable falling edge 
      }
    }
  async command void CaptureB.setEdge(bool up) { 
    if (up) {
      LPC_TIM0 -> CCR |= 1 << 3; // Enable rising edge 
      LPC_TIM0 -> CCR &= 0 << 4; // Disable falling edge 
      }
    if (!up) {
      LPC_TIM0 -> CCR &= 0 << 3; // Disable rising edge 
      LPC_TIM0 -> CCR |= 1 << 4; // Enable falling edge 
      }
    }

  //=== Timer interrupts signals ========================================
  default async event void CompareA.fired() { }
  }
  default async event void CompareB.fired() { }
  AVR_NONATOMIC_HANDLER(SIG_OUTPUT_COMPARE3B) {
    signal CompareB.fired();
  }
  default async event void CompareC.fired() { }
  AVR_NONATOMIC_HANDLER(SIG_OUTPUT_COMPARE3C) {
    signal CompareC.fired();
  }
  default async event void CompareD.fired() { }
  AVR_NONATOMIC_HANDLER(SIG_OUTPUT_COMPARE3C) {
    signal CompareC.fired();
  }
  default async event void Capture.captured(uint16_t time) { }
  AVR_NONATOMIC_HANDLER(SIG_INPUT_CAPTURE3) {
    signal Capture.captured(call Capture.get());
  }
  default async event void Timer.overflow() { }
  AVR_NONATOMIC_HANDLER(SIG_OVERFLOW3) {
    signal Timer.overflow();

  }
}