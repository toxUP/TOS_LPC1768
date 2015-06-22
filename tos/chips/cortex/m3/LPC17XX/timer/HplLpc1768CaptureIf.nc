// Basic HPL interface for Capture registers on LPC1768
// Adapted from ATM128
interface HplAtm128CaptureIf
{
  // Get capture register value
  async command uint32_t get();

  // Set capture register value
  async command void set(uint32_t t);

  // ==== Interrupt signals ==========================================
  /** 
   * Signalled on capture interrupt.
   * @param t     the time of the capture event
   */
  async event void captured(size_type t);

  // Reset capture settings
  async command void reset();

  // Enable capture interrupt (rising edge)
  async command void start();          

  // Disable capture interrupt
  async command void stop();

  // Check capture status
  async command bool isOn();           

  /** 
   * Sets the capture edge.
   * @param up   TRUE = detect rising edge, FALSE = detect falling edge
   */
  async command void setEdge(bool up);
}
