/// $Id: HplAtm128GeneralIOPinP.nc,v 1.8 2010-06-29 22:07:43 scipio Exp $

/*
 * Copyright (c) 2004-2005 Crossbow Technology, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of Crossbow Technology nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * Generic pin access for pins mapped into I/O space (for which the sbi, cbi
 * instructions give atomic updates). This can be used for ports A-E.
 *
 * @author Martin Turon <mturon@xbow.com>
 * @author David Gay <dgay@intel-research.net>
 */
generic module HplLpc1768GeneralIOPinP (uint32_t port, uint32_t pin)
{
  provides interface GeneralIO as IO;
}
implementation
{
//#define pin (*TCAST(volatile uint32_t * ONE, pin))

//  IF THIS DOESN't WORK -> point to struct type through LPC_GPIOx -> STRUCT DEFINITIONS

  async command bool IO.get() {
    if (port == 0x2009C000) {
      LPC_GPIO0 -> FIOMASK = pin;
      return(((LPC_GPIO0 -> FIOPIN) & !(LPC_GPIO0 -> FIOMASK)) ? 1 : 0);
    }
    if (port == 0x2009C010) {
      LPC_GPIO1 -> FIOMASK = pin;
      return(((LPC_GPIO1 -> FIOPIN) & !(LPC_GPIO1 -> FIOMASK)) ? 1 : 0);
    }
    if (port == 0x2009C020) {
      LPC_GPIO2 -> FIOMASK = pin;
      return(((LPC_GPIO2 -> FIOPIN) & !(LPC_GPIO2 -> FIOMASK)) ? 1 : 0);
    }
    if (port == 0x2009C030) {
      LPC_GPIO3 -> FIOMASK = pin;
      return(((LPC_GPIO3 -> FIOPIN) & !(LPC_GPIO3 -> FIOMASK)) ? 1 : 0);
    }
  }

  async command void IO.set() {
    if (port == 0x2009C000) {
      LPC_GPIO0 -> FIOMASK = pin;
      LPC_GPIO0 -> FIOSET |= pin;
    }
    if (port == 0x2009C010) {
      LPC_GPIO1 -> FIOMASK = pin;
      LPC_GPIO1 -> FIOSET |= pin;
    }
    if (port == 0x2009C020) {
      LPC_GPIO2 -> FIOMASK = pin;
      LPC_GPIO2 -> FIOSET |= pin;
    }
    if (port == 0x2009C030) {
      LPC_GPIO3 -> FIOMASK = pin;
      LPC_GPIO3 -> FIOSET |= pin;
    }
  }

  async command void IO.clr() {
    if (port == 0x2009C000) {
      LPC_GPIO0 -> FIOMASK = pin;
      LPC_GPIO0 -> FIOCLR |= !pin;
    }
    if (port == 0x2009C010) {
      LPC_GPIO1 -> FIOMASK = pin;
      LPC_GPIO1 -> FIOCLR |= !pin;
    }
    if (port == 0x2009C020) {
      LPC_GPIO2 -> FIOMASK = pin;
      LPC_GPIO2 -> FIOCLR |= !pin;
    }
    if (port == 0x2009C030) {
      LPC_GPIO3 -> FIOMASK = pin;
      LPC_GPIO3 -> FIOCLR |= !pin;
    }
  }
  command void IO.toggle()     { 
    if (port == 0x2009C000) {
      LPC_GPIO0 -> FIOMASK = pin;
      if (((LPC_GPIO0 -> FIOPIN) & !(LPC_GPIO0 -> FIOMASK)) ? 1 : 0) LPC_GPIO0 -> FIOCLR |= !pin;
      else LPC_GPIO0 -> FIOSET |= pin;
    }
    if (port == 0x2009C010) {
      LPC_GPIO1 -> FIOMASK = pin;
      if (((LPC_GPIO1 -> FIOPIN) & !(LPC_GPIO1 -> FIOMASK)) ? 1 : 0) LPC_GPIO1 -> FIOCLR |= !pin;
      else LPC_GPIO1 -> FIOSET |= pin;
    }
    if (port == 0x2009C020) {
      LPC_GPIO2 -> FIOMASK = pin;
      if (((LPC_GPIO2 -> FIOPIN) & !(LPC_GPIO2 -> FIOMASK)) ? 1 : 0) LPC_GPIO2 -> FIOCLR |= !pin;
      else LPC_GPIO2 -> FIOSET |= pin;
    }
    if (port == 0x2009C030) {
      LPC_GPIO3 -> FIOMASK = pin;
      if (((LPC_GPIO3 -> FIOPIN) & !(LPC_GPIO3 -> FIOMASK)) ? 1 : 0) LPC_GPIO3 -> FIOCLR |= !pin;
      else LPC_GPIO3 -> FIOSET |= pin;
    }
  }
    
  async command void IO.makeInput()  {
    if (port == 0x2009C000) LPC_GPIO0 -> FIODIR &= pin;
    if (port == 0x2009C010) LPC_GPIO1 -> FIODIR &= pin;
    if (port == 0x2009C020) LPC_GPIO2 -> FIODIR &= pin;
    if (port == 0x2009C030) LPC_GPIO3 -> FIODIR &= pin;
    }
  async command void IO.makeOutput() {
    if (port == 0x2009C000) LPC_GPIO0 -> FIODIR |= pin;
    if (port == 0x2009C010) LPC_GPIO1 -> FIODIR |= pin;
    if (port == 0x2009C020) LPC_GPIO2 -> FIODIR |= pin;
    if (port == 0x2009C030) LPC_GPIO3 -> FIODIR |= pin;
    }

