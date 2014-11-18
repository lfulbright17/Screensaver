
/*
Screensaver.pde

Lights up all colors on the screen, shows a little sun 'setting'
over an ocean with tones for each sun movement. 
*/


#include <MeggyJrSimple.h> //

void setup()

{
  MeggyJrSimpleSetup();
    
}

void loop()
//elana helped me a lot with how to have 2 events occur at the same time using second
{
  seconddrawSKY();   //draws the sky and ocean
    DisplaySlate();
    delay(1000);
  seconddrawSKY();
  drawPEAKINGSUN(); //draws first sun
  DisplaySlate();
  Tone_Start(ToneC5, 100);
    delay(1000);
    ClearSlate();
  seconddrawSKY();
  drawFULLSUN(); //draws 2nd sun
    DisplaySlate();
    Tone_Start(ToneB5, 100);
    delay(1000);
    ClearSlate();
  seconddrawSKY();
  drawSECONDSUN(); //draws 3rd sun
    DisplaySlate();
    Tone_Start(ToneA5, 100);
    delay(1000);
    ClearSlate();
  seconddrawSKYTWO(); //draws a darker sky and ocean
  drawTHIRDSUN(); //draws fourth sun
    DisplaySlate();
    Tone_Start(ToneA5, 100);
    delay(1000);
    ClearSlate();
  seconddrawSKYTWO();
  drawFOURTHSUN(); //draws 5th sun
    DisplaySlate();
    Tone_Start(ToneB5, 100);
    delay(1000);
    ClearSlate();
  seconddrawSKYTHREE(); //draws the final sky and ocean
  drawFIFTHSUN(); //draws final sun
    DisplaySlate();
    Tone_Start(ToneC5, 100);
    delay(1000);
    ClearSlate();
  
  DisplaySlate();

}


void seconddrawSKY()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
   DrawPx(i, m, Blue);
   
  for(int o=0; o<8; o++)
   DrawPx(o, 1, 12);
  for(int s=0; s<8; s++)
   DrawPx(s, 0, 12);
} 

void seconddrawSKYTWO()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
   DrawPx(i, m, DimYellow);
   
  for(int o=0; o<8; o++)
   DrawPx(o, 1, Blue);
  for(int s=0; s<8; s++)
   DrawPx(s, 0, Blue);
} 

void seconddrawSKYTHREE()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
   DrawPx(i, m, DimRed);
   
  for(int o=0; o<8; o++)
   DrawPx(o, 1, Blue);
  for(int s=0; s<8; s++)
   DrawPx(s, 0, Blue);
} 

void drawPEAKINGSUN()

{
  DrawPx(3, 7, Red);
  DrawPx(4, 7, Red);
}

void drawFULLSUN()

{
  DrawPx(3, 7, Red);
  DrawPx(4, 7, Red);
  DrawPx(3, 6, Red);
  DrawPx(4, 6, Red);
}

void drawSECONDSUN()

{
  DrawPx(3, 6, Yellow);
  DrawPx(4, 6, Yellow);
  DrawPx(3, 5, Yellow);
  DrawPx(4, 5, Yellow);
}

void drawTHIRDSUN()

{
  DrawPx(3, 5, Orange);
  DrawPx(4, 5, Orange);
  DrawPx(3, 4, Orange);
  DrawPx(4, 4, Orange);
}

void drawFOURTHSUN()

{
  DrawPx(3, 4, DimOrange);
  DrawPx(4, 4, DimOrange);
  DrawPx(3, 3, DimOrange);
  DrawPx(4, 3, DimOrange);
}

void drawFIFTHSUN()

{
  DrawPx(3, 2, DimYellow);
  DrawPx(4, 2, DimYellow);
}


