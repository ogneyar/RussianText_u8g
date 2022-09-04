// ESP8266
// for SSD1306_128X64

#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g(U8G2_R0, U8X8_PIN_NONE);

#include <RussianText_u8g.h>

byte sdvig = 2; // сдвиг координат, связан с некорректным выводом информации

// вывод на экран надписи "Hello World!"
void hello_world(void) { 
  u8g.setFont(u8g2_font_ncenB08_tr); // choose a suitable font
  u8g.drawStr(5+sdvig, 17, "Hello World!"); // write something to the internal memory
}

// вывод рамки на экран
void border(void) { 
  u8g.drawLine(0+sdvig, 0, 0+sdvig, 63); // линия рамки слева  
  u8g.drawLine(0+sdvig, 0, 127, 0); // линия рамки сверху
  u8g.drawLine(127, 0, 127, 63); // линия рамки справа
  u8g.drawLine(0+sdvig, 63, 127, 63); // линия рамки снизу
}

// вывод русских букв на экран
void russian_text(void) {
  send("абвгдеёжзийклм", 5+sdvig, 30); 
  send("АБВГДЕЁЖЗИЙКЛМ", 5+sdvig, 45);
}

void setup(void) {
  u8g.begin();
 
  u8g.clearBuffer(); // очистка экрана
  
  border();
  hello_world();
  russian_text();
  
  u8g.sendBuffer(); // перенос данных из памяти на экран
}

void loop(void) {
  
}
