/*
 * Song: The Imperial March by John Williams
 *
 *	Melody 0 | Piano
 *	Melody 1 | Piano
 *	Melody 2 | Piano
 *	Melody 3 | Piano
 *	Melody 4 | Piano
*/

#include <Arduino.h>
#include "notes.h"

const Note melody0[] PROGMEM = {
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 307 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_GB4, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_BB3, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_BB3, 306 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_B4, 102 }, 
	{ NOTE_B4, 102 }, 
	{ NOTE_B4, 102 }, 
	{ NOTE_DB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 459 }, 
	{ NOTE_G4, 153 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_GB4, 459 }, 
	{ NOTE_F4, 154 }, 
	{ NOTE_E4, 153 }, 
	{ NOTE_EB4, 153 }, 
	{ NOTE_E4, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_AB3, 306 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_C4, 459 }, 
	{ NOTE_B4, 154 }, 
	{ NOTE_BB3, 153 }, 
	{ NOTE_A3, 153 }, 
	{ NOTE_BB3, 153 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_EB3, 306 }, 
	{ NOTE_GB3, 612 }, 
	{ NOTE_EB3, 459 }, 
	{ NOTE_GB3, 154 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_D4, 1225 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 459 }, 
	{ NOTE_G4, 153 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_GB4, 459 }, 
	{ NOTE_F4, 154 }, 
	{ NOTE_E4, 153 }, 
	{ NOTE_EB4, 153 }, 
	{ NOTE_E4, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_AB3, 306 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_C4, 459 }, 
	{ NOTE_B4, 154 }, 
	{ NOTE_BB3, 153 }, 
	{ NOTE_A3, 153 }, 
	{ NOTE_BB3, 153 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_EB3, 306 }, 
	{ NOTE_GB3, 612 }, 
	{ NOTE_GB3, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_BB3, 1225 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_GB3, 102 }, 
	{ NOTE_GB3, 102 }, 
	{ NOTE_GB3, 102 }, 
	{ NOTE_GB3, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_GB3, 102 }, 
	{ NOTE_GB3, 102 }, 
	{ NOTE_GB3, 102 }, 
	{ NOTE_GB3, 307 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 102 }, 
	{ NOTE_GB4, 307 }, 
	{ NOTE_D4, 306 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_F4, 306 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_AB4, 102 }, 
	{ NOTE_AB4, 102 }, 
	{ NOTE_AB4, 102 }, 
	{ NOTE_BB4, 307 }, 
};
const uint16_t NUM_OF_NOTES0 = sizeof(melody0)/sizeof(melody0[0]);

const Note melody1[] PROGMEM = {
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 307 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 307 }, 
	{ NOTE_BB4, 612 }, 
	{ NOTE_BB4, 612 }, 
	{ NOTE_BB4, 612 }, 
	{ NOTE_BB4, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_GB4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_D4, 306 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_F4, 307 }, 
	{ NOTE_BB4, 612 }, 
	{ NOTE_G4, 459 }, 
	{ NOTE_G4, 153 }, 
	{ NOTE_BB4, 612 }, 
	{ NOTE_GB5, 459 }, 
	{ NOTE_F5, 154 }, 
	{ NOTE_AB4, 153 }, 
	{ NOTE_EB5, 153 }, 
	{ NOTE_E5, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_AB4, 306 }, 
	{ NOTE_E4, 612 }, 
	{ NOTE_C5, 459 }, 
	{ NOTE_B5, 154 }, 
	{ NOTE_EB4, 153 }, 
	{ NOTE_A4, 153 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_EB4, 306 }, 
	{ NOTE_GB4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_GB4, 154 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_G4, 1225 }, 
	{ NOTE_BB4, 612 }, 
	{ NOTE_G4, 459 }, 
	{ NOTE_G4, 153 }, 
	{ NOTE_BB4, 612 }, 
	{ NOTE_GB5, 459 }, 
	{ NOTE_F5, 154 }, 
	{ NOTE_AB4, 153 }, 
	{ NOTE_EB5, 153 }, 
	{ NOTE_E5, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_AB4, 306 }, 
	{ NOTE_E4, 612 }, 
	{ NOTE_C5, 459 }, 
	{ NOTE_B5, 154 }, 
	{ NOTE_EB4, 153 }, 
	{ NOTE_A4, 153 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_EB4, 306 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_D4, 1225 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 102 }, 
	{ NOTE_BB3, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G5, 102 }, 
	{ NOTE_G5, 102 }, 
	{ NOTE_G5, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 307 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_AB4, 102 }, 
	{ NOTE_AB4, 102 }, 
	{ NOTE_AB4, 102 }, 
	{ NOTE_BB4, 306 }, 
	{ NOTE_C5, 306 }, 
	{ NOTE_C5, 102 }, 
	{ NOTE_C5, 102 }, 
	{ NOTE_C5, 102 }, 
	{ NOTE_DB5, 102 }, 
	{ NOTE_DB5, 102 }, 
	{ NOTE_DB5, 102 }, 
	{ NOTE_EB5, 307 }, 
};
const uint16_t NUM_OF_NOTES1 = sizeof(melody1)/sizeof(melody1[0]);

const Note melody2[] PROGMEM = {
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_FS5, 102 }, 
	{ NOTE_FS5, 102 }, 
	{ NOTE_FS5, 102 }, 
	{ NOTE_FS5, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_FS5, 102 }, 
	{ NOTE_FS5, 102 }, 
	{ NOTE_FS5, 102 }, 
	{ NOTE_FS5, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_FS4, 102 }, 
	{ NOTE_FS4, 102 }, 
	{ NOTE_FS4, 102 }, 
	{ NOTE_FS4, 307 }, 
	{ NOTE_D5, 612 }, 
	{ NOTE_D5, 612 }, 
	{ NOTE_D5, 612 }, 
	{ NOTE_EB5, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_GB4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_D4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_F4, 307 }, 
	{ NOTE_D5, 612 }, 
	{ NOTE_G4, 459 }, 
	{ NOTE_G4, 153 }, 
	{ NOTE_D5, 612 }, 
	{ NOTE_GB5, 459 }, 
	{ NOTE_F5, 154 }, 
	{ NOTE_DB5, 153 }, 
	{ NOTE_EB5, 153 }, 
	{ NOTE_E5, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_AB4, 306 }, 
	{ NOTE_AB4, 612 }, 
	{ NOTE_C5, 459 }, 
	{ NOTE_B5, 154 }, 
	{ NOTE_GB4, 153 }, 
	{ NOTE_A4, 153 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_EB4, 306 }, 
	{ NOTE_GB4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_GB4, 154 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_BB4, 1225 }, 
	{ NOTE_D5, 612 }, 
	{ NOTE_G4, 459 }, 
	{ NOTE_G4, 153 }, 
	{ NOTE_D5, 612 }, 
	{ NOTE_GB5, 459 }, 
	{ NOTE_F5, 154 }, 
	{ NOTE_DB5, 153 }, 
	{ NOTE_EB5, 153 }, 
	{ NOTE_E5, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_AB4, 306 }, 
	{ NOTE_AB4, 612 }, 
	{ NOTE_C5, 459 }, 
	{ NOTE_B5, 154 }, 
	{ NOTE_GB4, 153 }, 
	{ NOTE_A4, 153 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_REST, 153 }, 
	{ NOTE_REST, 306 }, 
	{ NOTE_EB4, 306 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 154 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_EB4, 459 }, 
	{ NOTE_BB4, 153 }, 
	{ NOTE_G4, 1225 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 102 }, 
	{ NOTE_EB4, 307 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 102 }, 
	{ NOTE_G4, 306 }, 
	{ NOTE_G5, 102 }, 
	{ NOTE_G5, 102 }, 
	{ NOTE_G5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 307 }, 
	{ NOTE_BB4, 306 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_BB4, 102 }, 
	{ NOTE_B5, 102 }, 
	{ NOTE_B5, 102 }, 
	{ NOTE_B5, 102 }, 
	{ NOTE_DB5, 306 }, 
	{ NOTE_EB5, 306 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_EB5, 102 }, 
	{ NOTE_E5, 102 }, 
	{ NOTE_E5, 102 }, 
	{ NOTE_E5, 102 }, 
	{ NOTE_GB5, 307 }, 
};
const uint16_t NUM_OF_NOTES2 = sizeof(melody2)/sizeof(melody2[0]);

const Note melody3[] PROGMEM = {
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_GB4, 613 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_GB4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 613 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_GB4, 613 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_C4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 613 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 613 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_DB4, 613 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_G4, 613 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_DB4, 612 }, 
	{ NOTE_DB4, 613 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_C4, 613 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_GB4, 612 }, 
	{ NOTE_G4, 612 }, 
	{ NOTE_REST, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_REST, 307 }, 
};
const uint16_t NUM_OF_NOTES3 = sizeof(melody3)/sizeof(melody3[0]);

const Note melody4[] PROGMEM = {
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 613 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 613 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 613 }, 
	{ NOTE_AB3, 612 }, 
	{ NOTE_AB3, 612 }, 
	{ NOTE_AB3, 612 }, 
	{ NOTE_AB3, 613 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 613 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_D4, 613 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 613 }, 
	{ NOTE_AB3, 612 }, 
	{ NOTE_AB3, 612 }, 
	{ NOTE_AB3, 612 }, 
	{ NOTE_AB3, 613 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_G3, 613 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_BB3, 612 }, 
	{ NOTE_D4, 612 }, 
	{ NOTE_REST, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_G3, 612 }, 
	{ NOTE_EB4, 613 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 102 }, 
	{ NOTE_G3, 306 }, 
	{ NOTE_REST, 307 }, 
};
const uint16_t NUM_OF_NOTES4 = sizeof(melody4)/sizeof(melody4[0]);

