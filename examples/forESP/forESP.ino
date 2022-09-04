// ESP8266
// for SSD1306_128X64

#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g(U8G2_R0, U8X8_PIN_NONE);

#include <RussianText_u8g.h>


void test(void) { 
  u8g.setFont(u8g2_font_ncenB08_tr); // choose a suitable font
  u8g.drawStr(2,17,"Hello World!"); // write something to the internal memory
}


void setup(void) {
  u8g.begin();
 
  u8g.clearBuffer();          // clear the internal memory
  
  test();
  
  // вывод русских букв на экран
  send("абвгдеёжзий", 2, 30); 

  send("АБВГДЕЁЖЗИЙ", 2, 45);
    
  u8g.drawLine(0, 0, 127, 0);
  u8g.drawLine(0, 63, 127, 63);
    
  u8g.sendBuffer();           // transfer internal memory to the display
}

void loop(void) {
  
}
