/**
 * HPL for the mbed LPC 1768 microprocessor. This provides an
 * abstraction for general-purpose I/O.
 *
 */

#include "mbed.h"

configuration HplLpc1768GeneralIOC
{
  // provides all the ports as raw ports
  provides {
    interface HplLpc1768GeneralIO as p5;
    interface HplLpc1768GeneralIO as p6;
    interface HplLpc1768GeneralIO as p7;
    interface HplLpc1768GeneralIO as p8;
    interface HplLpc1768GeneralIO as p9;
    interface HplLpc1768GeneralIO as p10;
    interface HplLpc1768GeneralIO as p11;
    interface HplLpc1768GeneralIO as p12;
    interface HplLpc1768GeneralIO as p13;
    interface HplLpc1768GeneralIO as p14;
    interface HplLpc1768GeneralIO as p15;
    interface HplLpc1768GeneralIO as p16;
    interface HplLpc1768GeneralIO as p17;
    interface HplLpc1768GeneralIO as p18;
    interface HplLpc1768GeneralIO as p19;
    interface HplLpc1768GeneralIO as p20;
    interface HplLpc1768GeneralIO as p21;
    interface HplLpc1768GeneralIO as p22;
    interface HplLpc1768GeneralIO as p23;
    interface HplLpc1768GeneralIO as p24;
    interface HplLpc1768GeneralIO as p25;
    interface HplLpc1768GeneralIO as p26;
    interface HplLpc1768GeneralIO as p27;
    interface HplLpc1768GeneralIO as p28;
    interface HplLpc1768GeneralIO as p29;
    interface HplLpc1768GeneralIO as p30;

    interface HplLpc1768GeneralIO as Led1;
    interface HplLpc1768GeneralIO as Led2;
    interface HplLpc1768GeneralIO as Led3;
    interface HplLpc1768GeneralIO as Led4;
  }
}
implementation
{
  components 
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFDFF) as p5,   //  P0_9 
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFEFF) as p6,   //  P0_8
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFF7F) as p7,   //  P0_7
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFFBF) as p8,   //  P0_6
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFFFE) as p9,   //  P0_0
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFFFD) as p10,  //  P0_1
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFBFFFF) as p11,  //  P0_18
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFDFFFF) as p12,  //  P0_17
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFF7FFF) as p13,  //  P0_15
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFEFFFF) as p14,  //  P0_16
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFF7FFFFF) as p15,  //  P0_23
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFEFFFFFF) as p16,  //  P0_24
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFDFFFFFF) as p17,  //  P0_25
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFBFFFFFF) as p18,  //  P0_26
    new HplLpc1768GeneralIOPinP(0x2009C010, 0xBFFFFFFF) as p19,  //  P1_30
    new HplLpc1768GeneralIOPinP(0x2009C010, 0x7FFFFFFF) as p20,  //  P1_31
    new HplLpc1768GeneralIOPinP(0x2009C020, 0xFFFFFFDF) as p21,  //  P2_5
    new HplLpc1768GeneralIOPinP(0x2009C020, 0xFFFFFFEF) as p22,  //  P2_4
    new HplLpc1768GeneralIOPinP(0x2009C020, 0xFFFFFFF7) as p23,  //  P2_3
    new HplLpc1768GeneralIOPinP(0x2009C020, 0xFFFFFFFB) as p24,  //  P2_2
    new HplLpc1768GeneralIOPinP(0x2009C020, 0xFFFFFFFD) as p25,  //  P2_1
    new HplLpc1768GeneralIOPinP(0x2009C020, 0xFFFFFFFE) as p26,  //  P2_0
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFF7FF) as p27,  //  P0_11
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFBFF) as p28,  //  P0_10
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFFDF) as p29,  //  P0_5
    new HplLpc1768GeneralIOPinP(0x2009C000, 0xFFFFFFEF) as p30,  //  P0_4

    new HplLpc1768GeneralIOPinP(0x2009C010, 0xFFFBFFFF) as LED1, //  P1_18
    new HplLpc1768GeneralIOPinP(0x2009C010, 0xFFEFFFFF) as LED2, //  P1_20
    new HplLpc1768GeneralIOPinP(0x2009C010, 0xFFDFFFFF) as LED3, //  P1_21
    new HplLpc1768GeneralIOPinP(0x2009C010, 0xFF7FFFFF) as LED5; //  P1_23

    //PlatformC; // dummy to end unknown sequence
  
  p5  = p5;
  p6  = p6;
  p7  = p7;
  p8  = p8;
  p9  = p9;
  p10 = p10;
  p11 = p11;
  p12 = p12;
  p13 = p13;
  p14 = p14;
  p15 = p15;
  p16 = p16;
  p17 = p17;
  p18 = p18;
  p19 = p19;
  p20 = p20;
  p21 = p21;
  p22 = p22;
  p23 = p23;
  p24 = p24;
  p25 = p25;
  p26 = p26;
  p27 = p27;
  p28 = p28;
  p29 = p29;
  p30 = p30;
  
  Led1 = LED1;
  Led2 = LED2;
  Led3 = LED3;
  Led4 = LED4;
}
