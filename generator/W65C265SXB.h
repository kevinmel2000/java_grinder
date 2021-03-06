/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 * W65C265SXB by Joe Davisson
 *
 */

#ifndef JAVA_GRINDER_GENERATOR_W65C265SXB_H
#define JAVA_GRINDER_GENERATOR_W65C265SXB_H

#include "generator/W65816.h"

class W65C265SXB : public W65816
{
public:
  W65C265SXB();
  virtual ~W65C265SXB();

  virtual int open(const char *filename);

  // terminal interface API
  virtual int sxb_getChar();
  virtual int sxb_putChar_C();
  virtual int sxb_getInt();
  virtual int sxb_putInt_I();
  virtual int sxb_getString();
  virtual int sxb_putString_X();

  // GPIO functions
  virtual int ioport_setPinsAsInput_I(int port);
  virtual int ioport_setPinsAsInput_I(int port, int const_val);
  virtual int ioport_setPinsAsOutput_I(int port);
  virtual int ioport_setPinsAsOutput_I(int port, int const_val);
  virtual int ioport_setPinsValue_I(int port);
  virtual int ioport_setPinsValue_I(int port, int const_val);
  virtual int ioport_setPinsHigh_I(int port);
  virtual int ioport_setPinsLow_I(int port);
  virtual int ioport_setPinAsOutput_I(int port);
  virtual int ioport_setPinAsInput_I(int port);
  virtual int ioport_setPinHigh_I(int port);
  virtual int ioport_setPinHigh_I(int port, int const_val);
  virtual int ioport_setPinLow_I(int port);
  virtual int ioport_setPinLow_I(int port, int const_val);
  virtual int ioport_isPinInputHigh_I(int port);
  virtual int ioport_getPortInputValue(int port);
  //virtual int ioport_setPortOutputValue_I(int port);

  // tone generator API
  virtual int sxb_controlTones_IIZZ();

private:
  bool need_put_string:1;
  bool need_put_int:1;

  void insert_put_string();
  void insert_put_int();
};

#endif

