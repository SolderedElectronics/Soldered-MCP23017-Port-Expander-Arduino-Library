/**
 **************************************************
 *
 * @file        Interrupt.ino
 * @brief       Example for using interrupts in the mcp board, see more at www.solde.red/333077
 *
 *
 *
 * @authors     Zvonimir Haramustek for www.soldered.com.com
 ***************************************************/


#include "MCP23017-SOLDERED.h"

MCP_23017 mcp;

// is interrupted variable
volatile char state = 0;

// interrupt handler, should be as fast as possible
void interruptHandler()
{
    state = 1;
}

void setup()
{
    // Initialize MCP23017
    mcp.begin();

    // Initialize serial communication
    Serial.begin(115200);

    // Set pin 1 to input
    mcp.pinMode(GPB1, INPUT_PULLUP);

    // setup interrupts to be independent
    mcp.interruptMode(MCP23017InterruptMode::Separated); // Note no _ in the name of enum, thats because we are using
                                                         // blemasle's class enums

    // Enable interrupt on bank B (all GPB pins)
    mcp.interrupt(MCP23017Port::B, FALLING);


    // Adding interrupt to our boards inputs.
    pinMode(3, INPUT_PULLUP);

    // Set interrupt pin on our MCU board
    attachInterrupt(digitalPinToInterrupt(3), interruptHandler, FALLING);

    // Clear if mcp already interrupted
    mcp.clearInterrupts();
}

void loop()
{
    if (!state)
    {
        // just to be sure that arduino and mcp are in the "same state"
        // regarding interrupts
        mcp.clearInterrupts();
        return;
    }

    if (state)
    {
        // we are in interrupt, so we can do something
        Serial.println("Interrupted!");

        // clear interrupt
        mcp.clearInterrupts();
        state = 0;
    }

    delay(100);
}