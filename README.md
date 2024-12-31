# Arduino Buzzer Music Player #

Arduino project to play a song with multiple melodies using passive piezo buzzers. Each melody (instrument or voice) of the song is played by a different buzzer.

![Arduino Mega 2560 and Buzzers](/images/arduino-mega-buzzers.jpg)

## General ##
This project was developed using VS Code and PlatformIO. You should be able to run in Arduino's IDE with no issues.

The only library requirement is the [Buzzer Melody](https://github.com/jmelabs/BuzzerMelody) library which can be added to your project in both platforms.


## Arduino Core Tone Function Modification ##
The Arduino core "tone" function needs to be updated in order for all melodies/buzzers to work at the same time.

Please check the Pull Request I've created to check for the needed changes.
<https://github.com/arduino/ArduinoCore-avr/pull/581>

The maximum number of melodies that can be used depends on the Arduino platform.
In this project, I've tested with *Arduino Mega2560*, which allows to run up to five melodies simultaneously.

If this changes are not applied, you will only be able to play a single melody.

## Songs ##
All available songs can be found in the include/songs folder.
Each song contain five different melodies, each linked with a different instrument or voice.
To play all melodies, it is required to have a hardware 
platform that supports five different hardware timers, as each melody uses an individual timer. It is also possible to play less than five melodies. 

To play a different song, just update the header in the top of the main file.

```c
// Song
#include "Vivaldi_Spring.h"
```

### Available songs: ###

[Angra - Carry On](include/songs/Angra_CarryOn.h)<br>
[Beethoven - Moonlight Sonata 3rd Movement](include/songs/Beethoven_MoonlightSonata3rdMovement.h)<br>
[Brahms - Hungarian Dance No 5 in G Minor](include/songs/Brahms_HungarianDanceNo5inGMinor.h)<br>
[Dream Theater - The Dance Of Eternity](include/songs/DreamTheater_TheDanceOfEternity.h)<br>
[Game of Thrones](include/songs/GameOfThrones.h)<br>
[He's a Pirate](include/songs/HesaPirate.h)<br>
[Iron Maiden - Aces High](include/songs/IronMaiden_AcesHigh.h)<br>
[Iron Maiden - The Trooper](include/songs/IronMaiden_TheTrooper.h)<br>
[Kansas - Carry On My Wayward Son](include/songs/Kansas_CarryOnMyWaywardSon.h)<br>
[Led Zeppelin - Black Dog](include/songs/LedZeppelin_BlackDog.h)<br>
[Metallica - Enter Sandman](include/songs/Metallica_EnterSandman.h)<br>
[Metallica - Master of Puppets](include/songs/Metallica_MasterOfPuppets.h)<br>
[Mozart - Turkish March](include/songs/Mozart_TurkishMarch.h)<br>
[Pantera - Cowboys From Hell](include/songs/Pantera_CowboysFromHell.h)<br>
[Queen - Bohemian Rhapsody](include/songs/Queen_BohemianRhapsody.h)<br>
[Rush - YYZ](include/songs/Rush_Yyz.h)<br>
[Slayer - Raining Blood](include/songs/Slayer_RainingBlood.h)<br>
[Steve Vai - Eugene's Trick Bag](include/songs/SteveVai_EugenesTrickBag.h)<br>
[Street Fighter 2 - Guile](include/songs/StreetFighter2_Guile.h)<br>
[Street Fighter 2 - Ken](include/songs/StreetFighter2_Ken.h)<br>
[Street Fighter 2 - Ryu](include/songs/StreetFighter2_Ryu.h)<br>
[Street Fighter 2 - Vega](include/songs/StreetFighter2_Vega.h)<br>
[Super Mario Bros Theme](include/songs/SuperMarioBrosTheme.h)<br>
[Symphony X - Out of The Ashes](include/songs/SymphonyX_OutOfTheAshes.h)<br>
[Tchaikovski - Dance of the Sugar Plum Fairy](include/songs/Tchaikovski_DanceOfTheSugarPlumFairy.h)<br>
[The Beatles - Eleanor Rigby](include/songs/TheBeatles_EleanorRigby.h)<br>
[The Imperial March](include/songs/TheImperialMarch.h)<br>
[The Simpsons Theme](include/songs/TheSimpsonsTheme.h)<br>
[Tico Tico no Fuba](include/songs/TicoTicoNoFuba.h)<br>
[Tom<br> Jobim - The Girl From Ipanema](include/songs/TomJobim_TheGirlFromIpanema.h)<br>
[Vivaldi - Spring](include/songs/Vivaldi_Spring.h)<br>
[Vivaldi - Summer](include/songs/Vivaldi_Summer.h)<br>
[Vivaldi - Winter](include/songs/Vivaldi_Winter.h)<br>


## Hardware Connections ##

![Buzzers Music Player Hardware Connections](/images/hardware-connections.png)

The pins used in the original project are listed below:

```c
// Buzzers (Each melody in a separate piezo buzzer)
const uint8_t BUZZER_0_PIN = 11;
const uint8_t BUZZER_1_PIN = 2;
const uint8_t BUZZER_2_PIN = 6;
const uint8_t BUZZER_3_PIN = 46;
const uint8_t BUZZER_4_PIN = 9;

// Keys
const uint8_t KEY_ONE_PIN = 31;
const uint8_t KEY_TWO_PIN = 33;
const uint8_t KEY_ALL_STOP_PIN = 35;
```

They should be updated according to your platform and connections.