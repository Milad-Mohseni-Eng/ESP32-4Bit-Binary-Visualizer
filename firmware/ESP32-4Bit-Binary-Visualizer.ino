#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,-1);


char led_pins[] ={16,17,18,19};
char rows_columns [16][4]=
{
  {0,0,0,0},
  {0,0,0,1},
  {0,0,1,0},
  {0,0,1,1},
  {0,1,0,0},
  {0,1,0,1},
  {0,1,1,0},
  {0,1,1,1},
  {1,0,0,0},
  {1,0,0,1},
  {1,0,1,0},
  {1,0,1,1},
  {1,1,0,0},
  {1,1,0,1},
  {1,1,1,0},
  {1,1,1,1},
  };

  void setup()
  {
      Wire.begin(21,22);
      
    if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C))
    {
      while(true);
    }

    for (int led_outputs=0; led_outputs<4; led_outputs ++)
    {
      pinMode(led_pins[led_outputs], OUTPUT);
    }

  }

  void loop()
  {
    for (int rows = 0; rows <16; rows++)
    {
      for (int column=0; column < 4; column++)
      {
        digitalWrite(led_pins[column],rows_columns[rows][column]);

      }
      
        display.clearDisplay();
        display.setTextSize(1);
        display.setTextColor(SSD1306_WHITE);
        display.setCursor(0,0);
        display.print("Binary Counter");

        display.setCursor(0,20);
        display.print("Decimal: ");
        display.println(rows);

        display.setCursor(0,40);
        display.print("Binary:");

        for (int led=0; led<4; led++)
        {
          display.print(rows_columns[rows][led]);
        }

        display.display();

      delay(1000);

    }

  }