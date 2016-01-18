/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.naken.cc/
 * License: GPL
 *
 * Copyright 2014-2016 by Michael Kohn
 *
 */

package net.mikekohn.java_grinder;

abstract public class TRS80Coco
{
  public static final int MODE_3 = 3;

  public static final int COLOR_BLACK = 0x80;
  public static final int COLOR_GREEN = 0x8f;
  public static final int COLOR_YELLOW = 0x9f;
  public static final int COLOR_BLUE = 0xaf;
  public static final int COLOR_RED = 0xbf;
  public static final int COLOR_WHITE = 0xcf;
  public static final int COLOR_CYAN = 0xdf;
  public static final int COLOR_PURPLE = 0xef;
  public static final int COLOR_ORANGE = 0xff;

  protected TRS80Coco() { }

  public static void setBackgroundColor(int color) { }
  public static void setText(int address, int value) { }

  /** Plot a colored block.  x can be between 0 and 31, y between 0 and 15 */
  public static void plot(int x, int y, int color) { }
}
