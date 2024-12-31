/*
  Buzzer Music Player

  Written by Jean Elias

*/

#include <Arduino.h>
#include <BuzzerMelody.h>
#include "EventHandler.h"
#include "KeyHandler.h"
// Song
#include "Vivaldi_Spring.h"


// Buzzers (Each melody in a separate piezo buzzer)
const uint8_t BUZZER_0_PIN = 11;
const uint8_t BUZZER_1_PIN = 2;
const uint8_t BUZZER_2_PIN = 6;
const uint8_t BUZZER_3_PIN = 46;
const uint8_t BUZZER_4_PIN = 9;

BuzzerMelody buzzerMelody0(BUZZER_0_PIN, NUM_OF_NOTES0, melody0);
BuzzerMelody buzzerMelody1(BUZZER_1_PIN, NUM_OF_NOTES1, melody1);
BuzzerMelody buzzerMelody2(BUZZER_2_PIN, NUM_OF_NOTES2, melody2);
BuzzerMelody buzzerMelody3(BUZZER_3_PIN, NUM_OF_NOTES3, melody3);
BuzzerMelody buzzerMelody4(BUZZER_4_PIN, NUM_OF_NOTES4, melody4);

// Keys
const uint8_t KEY_ONE_PIN = 31;
const uint8_t KEY_TWO_PIN = 33;
const uint8_t KEY_ALL_STOP_PIN = 35;

KeyHandler keyOne(KEY_ONE_PIN, evKeyOnePressed);
KeyHandler keyTwo(KEY_TWO_PIN, evKeyTwoPressed);
KeyHandler keyAllStop(KEY_ALL_STOP_PIN, evKeyAllStopPressed);


////////////////////////////////////////////////
void musicHandlerLoop() {
  enum mh_sm {
    IDLE = 0,
    PLAYING
  };
  static mh_sm mhState = IDLE;

  switch (mhState) {
    default:
    case IDLE:
      if(isEventTriggered(evKeyOnePressed)) {
        buzzerMelody0.play();
        mhState = PLAYING;
      }

      if(isEventTriggered(evKeyTwoPressed)) {
        buzzerMelody0.play();
        buzzerMelody2.play();
        mhState = PLAYING;
      }

      if(isEventTriggered(evKeyAllStopPressed)) {
        buzzerMelody0.play();
        buzzerMelody1.play();
        buzzerMelody2.play();
        buzzerMelody3.play();
        buzzerMelody4.play();
        mhState = PLAYING;
      }
      break;
    
    case PLAYING:
      if(isEventTriggered(evKeyAllStopPressed) ||
        (buzzerMelody0.getState() == BuzzerMelody::IDLE &&
        buzzerMelody1.getState() == BuzzerMelody::IDLE &&
        buzzerMelody2.getState() == BuzzerMelody::IDLE &&
        buzzerMelody3.getState() == BuzzerMelody::IDLE &&
        buzzerMelody4.getState() == BuzzerMelody::IDLE)
        ) {
        buzzerMelody0.stop();
        buzzerMelody1.stop();
        buzzerMelody2.stop();
        buzzerMelody3.stop();
        buzzerMelody4.stop();
        mhState = IDLE;
      }

      break;
  }
}

////////////////////////////////////////////////
void setup() {

  buzzerMelody0.setup();
  buzzerMelody1.setup();
  buzzerMelody2.setup();
  buzzerMelody3.setup();
  buzzerMelody4.setup();

  keyOne.setup();
  keyTwo.setup();
  keyAllStop.setup();

  eventHandlerSetup();

}

////////////////////////////////////////////////
void loop() {
  uint32_t current_time = millis();

  buzzerMelody0.loop(current_time);
  buzzerMelody1.loop(current_time);
  buzzerMelody2.loop(current_time);
  buzzerMelody3.loop(current_time);
  buzzerMelody4.loop(current_time);

  keyOne.loop(current_time);
  keyTwo.loop(current_time);
  keyAllStop.loop(current_time);

  musicHandlerLoop(); 

  eventHandlerLoop();

}

