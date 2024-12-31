#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H

#include <Arduino.h>

enum EventType {
  evReserved = 0,
  evKeyAllStopPressed,
  evKeyOnePressed,
  evKeyTwoPressed,
  EVENT_COUNT
};
    
void eventHandlerSetup();
void eventHandlerLoop();
void triggerEvent(uint8_t eventType);
int8_t isEventTriggered(uint8_t eventType);


#endif /* EVENT_HANDLER_H */
