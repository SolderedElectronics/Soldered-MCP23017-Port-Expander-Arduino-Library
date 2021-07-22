/**
 **************************************************
 *
 * @file        Blink.ino
 * @brief       Example for blinking a pin on mcp board.
 *
 *
 *
 * @authors     Zvonimir Haramustek for www.soldered.com.com
 ***************************************************/

// Include the board file
#include "MCP23017-SOLDERED.h"

// Declare the board objecct
MCP_23017 mcp;

void setup()
{
    // Initialize the board
    mcp.begin();

    // Set the pin to output
    mcp.pinMode(GPA0, OUTPUT);
}

void loop()
{
    // Blink the pin
    mcp.digitalWrite(GPA0, HIGH);
    delay(1000);

    // Turn off the pin
    mcp.digitalWrite(GPA0, LOW);
    delay(1000);
}
