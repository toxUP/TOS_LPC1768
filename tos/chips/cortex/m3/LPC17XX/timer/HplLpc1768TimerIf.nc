// Basic HPL interface for hardware timers on LPC1768
// Adapted from ATM128

interface HplLpc1768TimerIf
{
  // Return current time
  async command uint32_t get();
  // Clear timer
  async command void clr();

  // Disable timer
  async command void off();
  // Reset timer
  async command void reset();
  // Start timer
  async command void start();
  // Stop timer
  async command void stop();

  // Set prescale value
  async command void    setScale( uint32_t s);
  // Get prescale value
  async command uint32_t getScale();
}
