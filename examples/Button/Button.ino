/**
 **************************************************
 *
 * @file        Button.ino
 * @brief       Example for using digitalRead
 *
 *
 *
 * @authors     Zvonimir Haramustek for www.soldered.com.com
 ***************************************************/

#include "MCP23017-SOLDERED.h"

MCP_23017 mcp;

void setup()
{
    // Initialize MCP23017
    mcp.begin();

    // Initialize serial communication
    Serial.begin(115200);

    // Set up the buttons
    mcp.pinMode(GPB0, INPUT_PULLUP);
}

void loop()
{
    // read the button
    if (mcp.digitalRead(GPB0) == LOW)
    {
        // button is pressed
        Serial.println("Button is pressed");
    }
    else
    {
        // button is not pressed
        Serial.println("Button is not pressed");
    }

    delay(1000);
}