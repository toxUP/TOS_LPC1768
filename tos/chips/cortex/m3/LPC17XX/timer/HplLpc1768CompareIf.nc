// Basic HPL interface for Match registers (Compare) on the LPC1768
// Adapted from ATM128

interface HplLpc1768CompareIf
{
  // ==== Compare value register: Direct access ======================
  /** 
   * Get the compare time to fire on.
   * @return  the compare time value
   */
  async command uint32_t get();

  /** 
   * Set the compare time to fire on.
   * @param t     the compare time to set
   */
  async command void set(uint32_t t);

  // ==== Interrupt signals ==========================================
  /** Signalled on  interrupt. */
  async event void fired();           //<! Signalled on compare interrupt

  // ==== Interrupt flag utilites: Bit level set/clr =================
  /** Clear the compare interrupt flag. */
  async command void reset();         

  /** Enable the compare interrupt. */
  async command void start();         

  /** Turn off comparee interrupts. */
  async command void stop();          

  /** 
   * Is compare interrupt on?
   * @return TRUE if compare enabled, FALSE otherwise
   */
  async command bool isOn();
}

