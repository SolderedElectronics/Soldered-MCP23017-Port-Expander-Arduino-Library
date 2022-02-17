/**
 **************************************************
 *
 * @file        MCP23017-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Zvonimir Haramustek for www.soldered.com.com
 ***************************************************/

#ifndef __MCP23017_SOLDERED__
#define __MCP23017_SOLDERED__

#include "Arduino.h"
#include "libs/Generic-easyC/easyC.hpp"
#include "libs/arduino-mcp23017/src/MCP23017.h"

#define GPA0 0
#define GPA1 1
#define GPA2 2
#define GPA3 3
#define GPA4 4
#define GPA5 5
#define GPA6 6
#define GPA7 7

#define GPB0 8
#define GPB1 9
#define GPB2 10
#define GPB3 11
#define GPB4 12
#define GPB5 13
#define GPB6 14
#define GPB7 15

class MCP_23017 : public MCP23017, public EasyC
{
  public:
    MCP_23017() : MCP23017(0x27, Wire) // EasyC / hardware I2C
    {
    }

    void begin()
    {
        Wire.begin();
        init();
    }

  protected:
    void initializeNative(){};

  private:
};

#endif
