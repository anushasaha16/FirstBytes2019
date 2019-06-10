


#include "FastLED.h"
#include "lights.h"
#include "tests.h"
#include "project.h"

CRGB leds[NUM_LEDS+1][NUM_STRANDS+1];

void setup()
{
  delay( 3000 ); // power-up safety delay
  
  leds_init();

  test_leds();
 
  leds_off(); 
}

void loop()
{ 
  actualColors();
  startBlink();
  delay(4400);
  blinkMelody(0, 3);
  blinkMelody2(0, 2);
  blinkMelody(4, 2);
  blinkMelody2(6, 0);
  blinkMelody(6, 1);
  blinkMelody2(6, 4);
  blinkMelody(5, 1);
  blinkMelody2(5, 2);
  blinkMelody(0, 5);
  blinkMelody2(4, 6);
  blinkMelody(4, 4);
  blinkMelody2(1, 1);
  blinkMelody(1, 3);
  blinkMelody2(1, 4);
  blinkMelody(2, 1);
  blinkMelody2(2, 2);
  delay(200);
  for(int i = 0; i < 4; i++)
    blinkAll();
  turnOff();
  delay(200);
  hardcoded();
  turnOff();
  delay(400);
  zigzag();
  turnOff();
  delay(400);
  zigzag();
  turnOff();
  snowflake();
  turnOff();
  delay(200);
  oddsAndEvens();
  turnOff();
  fire();
  fade_brightness();
  actualColors();
  delay(600000);
  
  //testLights();
  //blink_light_0_0_example();
  //blink_lights_0_0_and_2_4();
  //blink_all_lights();
  //blink_alternating_lights();
  //fade_brightness();
  //chase();
  //chase_two_colors_with_scroll();
  //leds[7][6] = CRGB::DarkOrchid;
  //leds_scroll();
  //leds[7][6] = CRGB::Blue;
  //leds_scroll();
  /*
  for ( int x = 0; x < NUM_STRANDS; ++x )
    for (int y = 0; y < NUM_LEDS; ++y )
    {
      leds[x][y].r=random(255);   //random is in the Arduino library.  Sends back a random number between 0 and its argument, inclusive.
      leds[x][y].g=random(255);   //One way to set the color of the LEDs to a custom color.
      leds[x][y].b=random(255);
    }
  */

    
  //add other functions you would like to execute here!
  
    
}
