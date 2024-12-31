
#include "KeyHandler.h"
#include "EventHandler.h"


KeyHandler::KeyHandler(uint8_t keyPin, uint8_t pressEvent) {
    _keyPin = keyPin;
    _pressEvent = pressEvent;
}

void KeyHandler::setup() {
  // Setup Buttons
  pinMode(_keyPin, INPUT_PULLUP);

}

void KeyHandler::loop(uint32_t currentTime) {
    switch(_keyState) {
        case INIT:
            if(digitalRead(_keyPin)) {
                _keyState = RELEASED;
            }
            else {
                _keyState = PRESSED;
            }
            break;

        case RELEASED:
            if(!digitalRead(_keyPin)) {
                _keyState = PRESSING;       
                _keyPreviousTime = currentTime;   
            }
            break;

        case PRESSING:
            if(currentTime - _keyPreviousTime > DEBOUNCE_TIME) {
                _keyState = PRESSED;
                triggerEvent(_pressEvent);
            }
            if(digitalRead(_keyPin)) {
                _keyState = RELEASED;
            }
            break;

        case PRESSED:
            if(digitalRead(_keyPin)) {
                _keyState = RELEASING;
                _keyPreviousTime = currentTime;
            }

            if(currentTime - _keyPreviousTime > HOLD_TIME) {
                _keyState = HOLDED;
            }
            break;

        case HOLDED:
            if(digitalRead(_keyPin)) {
                _keyState = RELEASING;
                _keyPreviousTime = currentTime;
            }
            break;

        case RELEASING:
            if(currentTime - _keyPreviousTime > DEBOUNCE_TIME) {
                _keyState = RELEASED;
           }
            if(!digitalRead(_keyPin)) {
                _keyState = PRESSED;       
            }            
            break;

    }
}

uint8_t KeyHandler::getState() {
    return _keyState;
}
