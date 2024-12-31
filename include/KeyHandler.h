#ifndef KEY_HANDLER_H
#define KEY_HANDLER_H

#include <Arduino.h>
#include "EventHandler.h"

#define DEBOUNCE_TIME   50      // ms
#define HOLD_TIME       3000    // ms

class KeyHandler {
    private:
        enum KH_SM {
            INIT = 0,
            PRESSING,
            PRESSED,
            HOLDED,
            RELEASING,
            RELEASED
        };

        KH_SM _keyState = INIT;
        uint32_t _keyPreviousTime = 0;
        uint8_t _keyPin;
        uint8_t _pressEvent = 0;
        // uint8_t _ReleaseEvent = 0;

    public:
        // Constructor
        KeyHandler(uint8_t keyPin, uint8_t pressEvent);

        // Methods
        void setup();
        void loop(uint32_t currentTime = millis());
        uint8_t getState();

};

#endif /* KEY_HANDLER_H */
