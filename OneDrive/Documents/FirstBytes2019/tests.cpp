//tests.cpp - learn how to control the lights here!
//by Alison N. Norman

#include "tests.h"

void fire() {
  leds[3][6] = CRGB::DarkRed;
  FastLED.delay(425);
  leds[5][6] = CRGB::DarkRed;
  leds[3][5] = CRGB::DarkRed;
  leds[2][6] = CRGB::DarkRed;
  FastLED.delay(425);
  leds[5][2] = CRGB::Red;
  leds[5][3] = CRGB::Red;
  leds[5][4] = CRGB::Red;
  leds[5][5] = CRGB::Red;
  leds[3][4] = CRGB::Red;
  leds[2][5] = CRGB::Red;
  leds[2][4] = CRGB::Red;
  leds[2][3] = CRGB::Red;
  leds[2][2] = CRGB::Red;
  FastLED.delay(425);
  leds[5][1] = CRGB::Red;
  leds[5][0] = CRGB::Red;
  leds[6][6] = CRGB::Red;
  leds[3][3] = CRGB::Red;
  leds[1][6] = CRGB::Red;
  leds[2][0] = CRGB::Red;
  leds[2][1] = CRGB::Red;
  FastLED.delay(425);
  leds[6][4] = CRGB::OrangeRed;
  leds[6][5] = CRGB::OrangeRed;
  leds[3][2] = CRGB::OrangeRed;
  leds[1][5] = CRGB::OrangeRed;
  leds[1][4] = CRGB::OrangeRed;
  FastLED.delay(425);
  leds[6][1] = CRGB::OrangeRed;
  leds[6][2] = CRGB::OrangeRed;
  leds[6][3] = CRGB::OrangeRed;
  leds[3][1] = CRGB::OrangeRed;
  leds[3][0] = CRGB::OrangeRed;
  leds[1][2] = CRGB::OrangeRed;
  leds[1][3] = CRGB::OrangeRed;
  FastLED.delay(425);
  leds[6][0] = CRGB::Orange;
  leds[4][0] = CRGB::Orange;
  leds[4][1] = CRGB::Orange;
  leds[1][0] = CRGB::Orange;
  leds[1][1] = CRGB::Orange;
  FastLED.delay(425);
  leds[4][2] = CRGB::Orange;
  leds[4][3] = CRGB::Orange;
  leds[4][4] = CRGB::Orange;
  FastLED.delay(425);
  leds[0][2] = CRGB::Goldenrod;
  leds[0][1] = CRGB::Goldenrod;
  leds[0][0] = CRGB::Goldenrod;
  leds[4][5] = CRGB::Goldenrod;
  leds[4][6] = CRGB::Goldenrod;
  FastLED.delay(425);
  leds[0][3] = CRGB::Goldenrod;
  leds[0][4] = CRGB::Goldenrod;
  leds[0][5] = CRGB::Goldenrod;
  FastLED.delay(425);
  leds[0][6] = CRGB::Gold;
  FastLED.delay(425);
}

void actualColors()
{
  FastLED.setBrightness(255);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      
      if (r==0 && c==6)
      {
        leds[0][6]=CRGB::Gold;
      }
      else if ((r==5 && c==6) || (r==3 && c==5) || (r==2 && c == 6) || (r==3 && c==6))
      {
        leds[r][c]=CRGB::SaddleBrown;
        //leds[r][c].r=67;
        //leds[r][c].g=6;
        //leds[r][c].b=12;
          
      }
      else
      {
        leds[r][c]=CRGB::DarkGreen;
      }
    }
  }

  
  FastLED.delay(1000);
}

void startBlink()
{
  FastLED.delay(1000);
  for(int i = 0; i < 3; i++) {
    leds[0][6]=CRGB::Gold;
    FastLED.delay(1000);
    leds[0][6]=CRGB::Black;
    FastLED.delay(1000);
  }
  leds[0][6] = CRGB::Gold;
  FastLED.delay(1000);
}

void blinkMelody(int r, int c) {
  leds[r][c] = CRGB::Red;
  FastLED.delay(400);
  leds[r][c] = CRGB::White;
  FastLED.delay(300);
  leds[r][c] = CRGB::Red;
  FastLED.delay(175);
  leds[r][c] = CRGB::White;
  FastLED.delay(220);
}

void blinkMelody2(int r, int c) {
  leds[r][c] = CRGB::White;
  FastLED.delay(400);
  leds[r][c] = CRGB::Red;
  FastLED.delay(300);
  leds[r][c] = CRGB::White;
  FastLED.delay(175);
  leds[r][c] = CRGB::Red;
  FastLED.delay(220);
}

void blinkAll() {
  //1
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      //FastLED.delay(100);
      leds[r][c]=CRGB::White;
    }
  }
  FastLED.delay(400);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      leds[r][c]=CRGB::Red;
    }
  }
  FastLED.delay(300);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      //FastLED.delay(100);
      leds[r][c]=CRGB::White;
    }
  }
  FastLED.delay(175);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      leds[r][c]=CRGB::Red;
    }
  }
  FastLED.delay(200);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      //FastLED.delay(100);
      leds[r][c]=CRGB::White;
    }
  }
}
// candy cane
void hardcoded() {
  leds[4][2] = CRGB::Red;
  FastLED.delay(300);
  leds[0][1] = CRGB::White;
  FastLED.delay(200);
  leds[0][4] = CRGB::Red;
  FastLED.delay(175);
  leds[4][5] = CRGB::White;
  FastLED.delay(175);
  leds[4][4] = CRGB::Red;
  FastLED.delay(200);
  leds[1][0] = CRGB::White;
  FastLED.delay(175);
  leds[3][0] = CRGB::Red;
  FastLED.delay(150);
  leds[1][5] = CRGB::White;
  FastLED.delay(300);
  leds[1][6] = CRGB::Red;
  FastLED.delay(200);
  leds[2][5] = CRGB::White;
  FastLED.delay(210);
  leds[2][5] = CRGB::Black;
  leds[1][6] = CRGB::White;
  FastLED.delay(200);
  leds[1][5] = CRGB::Red;
  FastLED.delay(300);
  leds[3][0] = CRGB::White;
  FastLED.delay(150);
  leds[1][0] = CRGB::Red;
  FastLED.delay(175);
  leds[4][4] = CRGB::White;
  FastLED.delay(200);
  leds[4][5] = CRGB::Red;
  FastLED.delay(175);
  leds[0][4] = CRGB::White;
  FastLED.delay(175);
  leds[0][1] = CRGB::Red;
  FastLED.delay(200);
  leds[4][2] = CRGB::White;
  FastLED.delay(350);
}

void turnOff() {
  for(int i = 0; i < 7; i++) {
    for(int j = 0; j < 7; j++) {
      leds[i][j] = CRGB::Black;
    }
  }
  //FastLED.delay(400); //later
}

void zigzag() {
  leds[0][6] = CRGB::Gold;
  FastLED.delay(38);
  leds[0][6] = CRGB::Black;
  leds[0][3] = CRGB::Gold;
  FastLED.delay(38);
  leds[0][3] = CRGB::Black;
  leds[0][4] = CRGB::Gold;
  FastLED.delay(38);
  leds[0][4] = CRGB::Black;
  leds[0][5] = CRGB::Gold;
  FastLED.delay(38);
  leds[0][5] = CRGB::Black;
  leds[4][6] = CRGB::Gold;
  FastLED.delay(38);
  leds[4][6] = CRGB::Black;
  leds[4][5] = CRGB::Gold;
  FastLED.delay(38);
  leds[4][5] = CRGB::Black;
  leds[0][0] = CRGB::Gold;
  FastLED.delay(38);
  leds[0][0] = CRGB::Black;
  leds[0][1] = CRGB::Gold;
  FastLED.delay(38);
  leds[0][1] = CRGB::Black;
  leds[0][2] = CRGB::Gold;
  FastLED.delay(38);
  leds[0][2] = CRGB::Black;
  leds[4][2] = CRGB::Gold;
  FastLED.delay(38);
  leds[4][2] = CRGB::Black;
  leds[4][3] = CRGB::Gold;
  FastLED.delay(38);
  leds[4][3] = CRGB::Black;
  leds[4][4] = CRGB::Gold;
  FastLED.delay(38);
  leds[4][4] = CRGB::Black;
  leds[1][1] = CRGB::Gold;
  FastLED.delay(38);
  leds[1][1] = CRGB::Black;
  leds[1][0] = CRGB::Gold;
  FastLED.delay(38);
  leds[1][0] = CRGB::Black;
  leds[4][1] = CRGB::Gold;
  FastLED.delay(38);
  leds[4][1] = CRGB::Black;
  leds[4][0] = CRGB::Gold;
  FastLED.delay(38);
  leds[4][0] = CRGB::Black;
  leds[6][0] = CRGB::Gold;
  FastLED.delay(38);
  leds[6][0] = CRGB::Black;
  leds[6][1] = CRGB::Gold;
  FastLED.delay(38);
  leds[6][1] = CRGB::Black;
  leds[6][2] = CRGB::Gold;
  FastLED.delay(38);
  leds[6][2] = CRGB::Black;
  leds[6][3] = CRGB::Gold;
  FastLED.delay(38);
  leds[6][3] = CRGB::Black;
  leds[3][1] = CRGB::Gold;
  FastLED.delay(38);
  leds[3][1] = CRGB::Black;
  leds[3][0] = CRGB::Gold;
  FastLED.delay(38);
  leds[3][0] = CRGB::Black;
  leds[1][2] = CRGB::Gold;
  FastLED.delay(38);
  leds[1][2] = CRGB::Black;
  leds[1][3] = CRGB::Gold;
  FastLED.delay(38);
  leds[1][3] = CRGB::Black;
  leds[1][4] = CRGB::Gold;
  FastLED.delay(38);
  leds[1][4] = CRGB::Black;
  leds[1][5] = CRGB::Gold;
  FastLED.delay(38);
  leds[1][5] = CRGB::Black;
  leds[3][2] = CRGB::Gold;
  FastLED.delay(38);
  leds[3][2] = CRGB::Black;
  leds[6][5] = CRGB::Gold;
  FastLED.delay(38);
  leds[6][5] = CRGB::Black;
  leds[6][4] = CRGB::Gold;
  FastLED.delay(38);
  leds[6][4] = CRGB::Black;
  leds[5][1] = CRGB::Gold;
  FastLED.delay(38);
  leds[5][1] = CRGB::Black;
  leds[5][0] = CRGB::Gold;
  FastLED.delay(38);
  leds[5][0] = CRGB::Black;
  leds[6][6] = CRGB::Gold;
  FastLED.delay(38);
  leds[6][6] = CRGB::Black;
  leds[3][3] = CRGB::Gold;
  FastLED.delay(38);
  leds[3][3] = CRGB::Black;
  leds[1][6] = CRGB::Gold;
  FastLED.delay(38);
  leds[1][6] = CRGB::Black;
  leds[2][0] = CRGB::Gold;
  FastLED.delay(38);
  leds[2][0] = CRGB::Black;
  leds[2][1] = CRGB::Gold;
  FastLED.delay(38);
  leds[2][1] = CRGB::Black;
  leds[2][2] = CRGB::Gold;
  FastLED.delay(38);
  leds[2][2] = CRGB::Black;
  leds[2][3] = CRGB::Gold;
  FastLED.delay(38);
  leds[2][3] = CRGB::Black;
  leds[2][4] = CRGB::Gold;
  FastLED.delay(38);
  leds[2][4] = CRGB::Black;
  leds[2][5] = CRGB::Gold;
  FastLED.delay(38);
  leds[2][5] = CRGB::Black;
  leds[3][4] = CRGB::Gold;
  FastLED.delay(38);
  leds[3][4] = CRGB::Black;
  leds[5][5] = CRGB::Gold;
  FastLED.delay(38);
  leds[5][5] = CRGB::Black;
  leds[5][4] = CRGB::Gold;
  FastLED.delay(38);
  leds[5][4] = CRGB::Black;
  leds[5][3] = CRGB::Gold;
  FastLED.delay(38);
  leds[5][3] = CRGB::Black;
  leds[5][2] = CRGB::Gold;
  FastLED.delay(38);
  leds[5][2] = CRGB::Black;
  leds[5][6] = CRGB::Gold;
  FastLED.delay(38);
  leds[5][6] = CRGB::Black;
  leds[3][5] = CRGB::Gold;
  FastLED.delay(38);
  leds[3][5] = CRGB::Black;
  leds[2][6] = CRGB::Gold;
  FastLED.delay(38);
  leds[2][6] = CRGB::Black;
  leds[3][6] = CRGB::Gold;
  FastLED.delay(38);
  leds[3][6] = CRGB::Black;
}

void snowflake()
{
  
  for(int i = 0; i < 4; i++) {
    leds[4][1] = CRGB::White;
    leds[4][3] = CRGB::White;
    leds[4][0] = CRGB::White;
    leds[1][0] = CRGB::White;
    leds[3][1] = CRGB::White;
    leds[0][0] = CRGB::White;
    leds[6][0] = CRGB::White;
    leds[1][1] = CRGB::White;
    leds[3][2] = CRGB::White;
    FastLED.delay(400);
    leds[4][1] = CRGB::Black;
    leds[4][3] = CRGB::Black;
    leds[4][0] = CRGB::Black;
    leds[1][0] = CRGB::Black;
    leds[3][1] = CRGB::Black;
    leds[0][0] = CRGB::Black;
    leds[6][0] = CRGB::Black;
    leds[1][1] = CRGB::Black;
    leds[3][2] = CRGB::Black;
  
    leds[4][1] = CRGB::White;
    leds[4][2] = CRGB::White;
    leds[4][4] = CRGB::White;
    leds[3][0] = CRGB::White;
    leds[6][3] = CRGB::White;
    leds[0][2] = CRGB::White;
    leds[4][6] = CRGB::White;
    leds[6][4] = CRGB::White;
    leds[1][4] = CRGB::White;
    FastLED.delay(300);
    leds[4][1] = CRGB::Black;
    leds[4][2] = CRGB::Black;
    leds[4][4] = CRGB::Black;
    leds[3][0] = CRGB::Black;
    leds[6][3] = CRGB::Black;
    leds[0][2] = CRGB::Black;
    leds[4][6] = CRGB::Black;
    leds[6][4] = CRGB::Black;
    leds[1][4] = CRGB::Black;
  
    leds[4][1] = CRGB::White;
    leds[4][3] = CRGB::White;
    leds[4][0] = CRGB::White;
    leds[1][0] = CRGB::White;
    leds[3][1] = CRGB::White;
    leds[0][0] = CRGB::White;
    leds[6][0] = CRGB::White;
    leds[1][1] = CRGB::White;
    leds[3][2] = CRGB::White;
    FastLED.delay(175);
    leds[4][1] = CRGB::Black;
    leds[4][3] = CRGB::Black;
    leds[4][0] = CRGB::Black;
    leds[1][0] = CRGB::Black;
    leds[3][1] = CRGB::Black;
    leds[0][0] = CRGB::Black;
    leds[6][0] = CRGB::Black;
    leds[1][1] = CRGB::Black;
    leds[3][2] = CRGB::Black;
  
    leds[4][1] = CRGB::White;
    leds[4][2] = CRGB::White;
    leds[4][4] = CRGB::White;
    leds[3][0] = CRGB::White;
    leds[6][3] = CRGB::White;
    leds[0][2] = CRGB::White;
    leds[4][6] = CRGB::White;
    leds[6][4] = CRGB::White;
    leds[1][4] = CRGB::White;
    FastLED.delay(220);
    leds[4][1] = CRGB::Black;
    leds[4][2] = CRGB::Black;
    leds[4][4] = CRGB::Black;
    leds[3][0] = CRGB::Black;
    leds[6][3] = CRGB::Black;
    leds[0][2] = CRGB::Black;
    leds[4][6] = CRGB::Black;
    leds[6][4] = CRGB::Black;
    leds[1][4] = CRGB::Black;
  }
  FastLED.delay(250);
  int bright = 60;
  for(int i = 0; i < 12; i++) {
    FastLED.setBrightness(bright);
    bright += 15;
    leds[4][1] = CRGB::DarkBlue;
    leds[4][3] = CRGB::DeepSkyBlue;
    leds[4][0] = CRGB::DeepSkyBlue;
    leds[1][0] = CRGB::DeepSkyBlue;
    leds[3][1] = CRGB::DeepSkyBlue;
    leds[0][0] = CRGB::White;
    leds[6][0] = CRGB::White;
    leds[1][1] = CRGB::White;
    leds[3][2] = CRGB::White;
    FastLED.delay(400);
    leds[4][1] = CRGB::Black;
    leds[4][3] = CRGB::Black;
    leds[4][0] = CRGB::Black;
    leds[1][0] = CRGB::Black;
    leds[3][1] = CRGB::Black;
    leds[0][0] = CRGB::Black;
    leds[6][0] = CRGB::Black;
    leds[1][1] = CRGB::Black;
    leds[3][2] = CRGB::Black;
  
    leds[4][1] = CRGB::DarkBlue;
    leds[4][2] = CRGB::DeepSkyBlue;
    leds[4][4] = CRGB::DeepSkyBlue;
    leds[3][0] = CRGB::DeepSkyBlue;
    leds[6][3] = CRGB::DeepSkyBlue;
    leds[0][2] = CRGB::White;
    leds[4][6] = CRGB::White;
    leds[6][4] = CRGB::White;
    leds[1][4] = CRGB::White;
    FastLED.delay(300);
    leds[4][1] = CRGB::Black;
    leds[4][2] = CRGB::Black;
    leds[4][4] = CRGB::Black;
    leds[3][0] = CRGB::Black;
    leds[6][3] = CRGB::Black;
    leds[0][2] = CRGB::Black;
    leds[4][6] = CRGB::Black;
    leds[6][4] = CRGB::Black;
    leds[1][4] = CRGB::Black;
  
    leds[4][1] = CRGB::DarkBlue;
    leds[4][3] = CRGB::DeepSkyBlue;
    leds[4][0] = CRGB::DeepSkyBlue;
    leds[1][0] = CRGB::DeepSkyBlue;
    leds[3][1] = CRGB::DeepSkyBlue;
    leds[0][0] = CRGB::White;
    leds[6][0] = CRGB::White;
    leds[1][1] = CRGB::White;
    leds[3][2] = CRGB::White;
    FastLED.delay(175);
    leds[4][1] = CRGB::Black;
    leds[4][3] = CRGB::Black;
    leds[4][0] = CRGB::Black;
    leds[1][0] = CRGB::Black;
    leds[3][1] = CRGB::Black;
    leds[0][0] = CRGB::Black;
    leds[6][0] = CRGB::Black;
    leds[1][1] = CRGB::Black;
    leds[3][2] = CRGB::Black;
  
    leds[4][1] = CRGB::DarkBlue;
    leds[4][2] = CRGB::DeepSkyBlue;
    leds[4][4] = CRGB::DeepSkyBlue;
    leds[3][0] = CRGB::DeepSkyBlue;
    leds[6][3] = CRGB::DeepSkyBlue;
    leds[0][2] = CRGB::White;
    leds[4][6] = CRGB::White;
    leds[6][4] = CRGB::White;
    leds[1][4] = CRGB::White;
    FastLED.delay(220);
    leds[4][1] = CRGB::Black;
    leds[4][2] = CRGB::Black;
    leds[4][4] = CRGB::Black;
    leds[3][0] = CRGB::Black;
    leds[6][3] = CRGB::Black;
    leds[0][2] = CRGB::Black;
    leds[4][6] = CRGB::Black;
    leds[6][4] = CRGB::Black;
    leds[1][4] = CRGB::Black;
  }
}

void oddsAndEvens() {
  for(int i = 0; i < 4; i++) {
    for(int r = 0; r < 7; r++) {
      for(int c = 0; c < 7; c++) {
        if(c % 2 == 0) {
          leds[r][c] = CRGB::DeepSkyBlue;
        } else {
          leds[r][c] = CRGB::White;
        }
      }
    }
    FastLED.delay(400);
    for(int r = 0; r < 7; r++) {
      for(int c = 0; c < 7; c++) {
        if(c % 2 == 0) {
          leds[r][c] = CRGB::White;
        } else {
          leds[r][c] = CRGB::DeepSkyBlue;
        }
      }
    }
    FastLED.delay(300);
    for(int r = 0; r < 7; r++) {
      for(int c = 0; c < 7; c++) {
        if(c % 2 == 0) {
          leds[r][c] = CRGB::DeepSkyBlue;
        } else {
          leds[r][c] = CRGB::White;
        }
      }
    }
    FastLED.delay(175);
    for(int r = 0; r < 7; r++) {
      for(int c = 0; c < 7; c++) {
        if(c % 2 == 0) {
          leds[r][c] = CRGB::White;
        } else {
          leds[r][c] = CRGB::DeepSkyBlue;
        }
      }
    }
    FastLED.delay(220);
  }
}


void testLights()
{
  
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      //FastLED.delay(100);
      leds[r][c]=CRGB::Orchid;
      FastLED.delay(10000); // 20s
      leds[r][c]=CRGB::Black;
    }
  }
}


//blink the light closest to the controller
void blink_light_0_0_example()
{
  leds[0][0]=CRGB::Teal; //defined in colors (pixeltypes.h), sets led 0,0 to white in strand

  FastLED.setBrightness(255);
   
  FastLED.delay(100); //pauses the program for the specified number of milliseconds
                       //do this to display the current light settings for a particular amount of time
                       //calls show, which mirrors the values in leds to the strand

  leds[0][0]=CRGB::Black; //Black turns the led off

  FastLED.delay(1000);

}

//Function to blink light (0,0) and (2,4) 
void blink_lights_0_0_and_2_4()
{
  leds[0][0]=CRGB::Teal; //defined in colors (pixeltypes.h), sets led 0,0 to white in strand
  leds[2][4]=CRGB::PeachPuff;

  FastLED.setBrightness(255);
   
  FastLED.delay(100); //pauses the program for the specified number of milliseconds
                       //do this to display the current light settings for a particular amount of time
                       //calls show, which mirrors the values in leds to the strand

  leds[0][0]=CRGB::Black; //Black turns the led off
  leds[2][4]=CRGB::Black;

  FastLED.delay(1000);

  
}

//Function to blink all lights
void blink_all_lights()
{
  FastLED.delay(100);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      //FastLED.delay(100);
      leds[r][c]=CRGB::Orchid;
    }
  }
  FastLED.delay(100);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      leds[r][c]=CRGB::Black;
    }
  }
}

//Function to blink alternating lights
void blink_alternating_lights()
{

  FastLED.delay(100);
  for (int r = 0; r < 7; r+=2)
  {
    for (int c = 0; c < 7; c+=2)
    {
      //FastLED.delay(100);
      leds[r][c]=CRGB::DarkOrchid;
    }
  }
  FastLED.delay(100);
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      leds[r][c]=CRGB::Black;
    }
  }
}


//Function to fade the brightness of all
void fade_brightness()
{
  //first give each a color
   for ( int x = 0; x < NUM_STRANDS; ++x )
    for (int y = 0; y < NUM_LEDS; ++y )
    {
      leds[x][y].r=random(255);   //random is in the Arduino library.  Sends back a random number between 0 and its argument, inclusive.
      leds[x][y].g=random(255);   //One way to set the color of the LEDs to a custom color.
      leds[x][y].b=random(255);
    }
  //then do brightness
  for(int brightness = 0; brightness <= 255; brightness++)
  {
    FastLED.setBrightness(brightness);
    FastLED.delay(9);
  }
  for(int brightness = 255; brightness >= 0; brightness--)
  {
    FastLED.setBrightness(brightness);
    FastLED.delay(9);
  }
}


void chase()
{
  /*
  int oldR = 0, oldC = 0;
  for (int r = 0; r < 7; r++)
  {
    for (int c = 0; c < 7; c++)
    {
      if(oldR != 0 && oldC != 0) {
        leds[oldR][oldC] = CRGB::Black;
      }
      FastLED.delay(100);
      leds[r][c]=CRGB::DarkOrchid;
      oldR = r;
      oldC = c;
    }
  }

  for (int r = 6; r >= 0; r--)
  {
    for (int c = 6; c >= 0; c--)
    {
      FastLED.delay(100);
      leds[r][c]=CRGB::Black;
    }
  }
  */
  for(int r = 0; r < 7; r++) {
    for(int c = 0; c <= 7; c++) {
      if(c!=0) {
        FastLED.delay(100);
        leds[r][c-1] = CRGB::Black;
      }
      if(c!=7) {
        FastLED.delay(100);
        leds[r][c] = CRGB::DarkOrchid;
      }
    }
  }
}


void chase_two_colors_with_scroll()
{
  
}
