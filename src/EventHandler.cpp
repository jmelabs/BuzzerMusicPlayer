#include <Arduino.h>
#include "EventHandler.h"

uint8_t eventTriggered[EVENT_COUNT];
uint8_t eventSet[EVENT_COUNT];


void eventHandlerSetup() {
  // Clear all event flags at initialization
  for (uint8_t i = 0; i < EVENT_COUNT; i++) {
    eventTriggered[i] = false;
    eventSet[i] = false;
  }
}


void eventHandlerLoop() {
  for (uint8_t i = 0; i < EVENT_COUNT; i++) {
    if (eventSet[i]) {
      eventTriggered[i] = false;  // Clear event flag after it was processed
      eventSet[i] = false;
    }
    if (eventTriggered[i]) {
      eventSet[i] = true;  // Clear event flag after it was processed
    }
  }  
}


void triggerEvent(uint8_t eventType) {
  if (eventType > 0 && eventType < EVENT_COUNT) {
    eventTriggered[eventType] = true;
    eventSet[eventType] = false;  // Reset the processed flag
  }
}


int8_t isEventTriggered(uint8_t eventType) {
  if (eventType > 0 && eventType < EVENT_COUNT) {
    return eventSet[eventType];
  }
  return -1;
}

