/*
 * Song: He's a Pirate
 *
 *	Melody 0 | Piano Right Hand
 *	Melody 1 | Piano Right Hand
 *	Melody 2 | Piano Right Hand
 *	Melody 3 | Piano Left Hand
 *	Melody 4 | Piano Left Hand
*/

#include <Arduino.h>
#include "notes.h"

const Note melody0[] PROGMEM = {
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_B3, 150 }, 
	{ NOTE_A3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_BB4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB4, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB4, 150 }, 
	{ NOTE_BB4, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_C5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_F4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_BB4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_BB4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_CS5, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_BB4, 150 }, 
	{ NOTE_BB4, 150 }, 
	{ NOTE_BB4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_CS4, 150 }, 
	{ NOTE_CS4, 300 }, 
	{ NOTE_G3, 450 }, 
	{ NOTE_A3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_CS4, 300 }, 
	{ NOTE_CS4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_F3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_A3, 525 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_C4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_C4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_CS4, 300 }, 
	{ NOTE_CS4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_CS4, 300 }, 
	{ NOTE_F3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_C5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_C5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_F4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_BB4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_CS5, 150 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_C5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_BB4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_F4, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_C5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_BB4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_F4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D4, 1350 }, 
	{ NOTE_REST, 450 }, 
};
const uint16_t NUM_OF_NOTES0 = sizeof(melody0)/sizeof(melody0[0]);

const Note melody1[] PROGMEM = {
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_E4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_A3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_G4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_CS4, 300 }, 
	{ NOTE_CS4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_CS4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_C5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_BB4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_C5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_E5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_CS5, 300 }, 
	{ NOTE_CS5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_CS5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C5, 300 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_G5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_BB4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_D4, 450 }, 
	{ NOTE_CS4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_E4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_A3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_D4, 525 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_E4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_F4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_A3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_A3, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_F5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_A5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_BB4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A5, 300 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_CS5, 150 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_G5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_F5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_F5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C6, 300 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D4, 1350 }, 
	{ NOTE_REST, 450 }, 
};
const uint16_t NUM_OF_NOTES1 = sizeof(melody1)/sizeof(melody1[0]);

const Note melody2[] PROGMEM = {
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_E4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_E4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_G4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_BB4, 300 }, 
	{ NOTE_BB4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_E4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_F5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_E5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_F5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_E5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_C5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_BB5, 300 }, 
	{ NOTE_BB5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_F5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_E5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_CS5, 150 }, 
	{ NOTE_D5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_BB5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_BB4, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_D4, 450 }, 
	{ NOTE_F4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_BB4, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_G4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_A4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_BB4, 150 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_D4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_F4, 525 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 150 }, 
	{ NOTE_G4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_G4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A4, 300 }, 
	{ NOTE_G4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_A4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_F4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E4, 300 }, 
	{ NOTE_D4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_D4, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_F5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_A5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A5, 300 }, 
	{ NOTE_BB5, 300 }, 
	{ NOTE_D5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_G5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_CS5, 150 }, 
	{ NOTE_A5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_BB5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_A5, 300 }, 
	{ NOTE_A5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_A5, 300 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_G5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_A5, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_BB5, 450 }, 
	{ NOTE_D5, 150 }, 
	{ NOTE_E5, 150 }, 
	{ NOTE_F5, 150 }, 
	{ NOTE_A5, 300 }, 
	{ NOTE_A5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C6, 300 }, 
	{ NOTE_A5, 150 }, 
	{ NOTE_G5, 300 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_G5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_F5, 300 }, 
	{ NOTE_G5, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_E5, 300 }, 
	{ NOTE_D5, 450 }, 
	{ NOTE_REST, 450 }, 
	{ NOTE_D4, 1350 }, 
	{ NOTE_REST, 450 }, 
};
const uint16_t NUM_OF_NOTES2 = sizeof(melody2)/sizeof(melody2[0]);

const Note melody3[] PROGMEM = {
	{ NOTE_REST, 900 }, 
	{ NOTE_REST, 900 }, 
	{ NOTE_REST, 900 }, 
	{ NOTE_REST, 900 }, 
	{ NOTE_D2, 900 }, 
	{ NOTE_D2, 450 }, 
	{ NOTE_D2, 450 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_F2, 300 }, 
	{ NOTE_F2, 150 }, 
	{ NOTE_F2, 300 }, 
	{ NOTE_F2, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_F2, 300 }, 
	{ NOTE_F2, 150 }, 
	{ NOTE_F2, 300 }, 
	{ NOTE_F2, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 300 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_BB2, 300 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_BB2, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_C3, 300 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_C3, 150 }, 
	{ NOTE_G2, 300 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_G2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 300 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_A2, 150 }, 
	{ NOTE_D3, 450 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D3, 150 }, 
	{ NOTE_D2, 1350 }, 
	{ NOTE_REST, 450 }, 
};
const uint16_t NUM_OF_NOTES3 = sizeof(melody3)/sizeof(melody3[0]);

const Note melody4[] PROGMEM = {
	{ NOTE_REST, 900 }, 
	{ NOTE_REST, 900 }, 
	{ NOTE_REST, 900 }, 
	{ NOTE_REST, 900 }, 
	{ NOTE_D3, 900 }, 
	{ NOTE_D3, 450 }, 
	{ NOTE_D3, 450 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_F3, 300 }, 
	{ NOTE_F3, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 225 }, 
	{ NOTE_REST, 75 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 300 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_BB3, 300 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_BB3, 150 }, 
	{ NOTE_F4, 300 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_F4, 150 }, 
	{ NOTE_C4, 300 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_C4, 150 }, 
	{ NOTE_G3, 300 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_G3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 300 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_A3, 150 }, 
	{ NOTE_D4, 450 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D4, 150 }, 
	{ NOTE_D3, 1350 }, 
	{ NOTE_REST, 450 }, 
};
const uint16_t NUM_OF_NOTES4 = sizeof(melody4)/sizeof(melody4[0]);
