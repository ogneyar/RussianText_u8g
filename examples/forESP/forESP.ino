// ESP8266
// for SSD1306_128X32
// or SSD1306_128X64

// разкомментировать под необходимый экран
#define SSD1306_128X32
//#define SSD1306_128X64

#include <U8g2lib.h>

#ifdef SSD1306_128X32
U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g(U8G2_R0, U8X8_PIN_NONE);
#else
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g(U8G2_R0, U8X8_PIN_NONE);
#endif

// обязательно после создания объекта класса u8g
#include <RussianText_u8g.h>


// вывод русских букв на экран
void russian_text(void) {
    // функция send из библиотеки RussianText_u8g
    // OFFSET можно убрать
    send("абвгдеёжзийклмн", 5+OFFSET, 5); 
    send("АБВГДЕЁЖЗИЙКЛМН", 5+OFFSET, 18);
}

void setup(void) {
    u8g.begin();
    
    u8g.clearBuffer(); // очистка экрана
    
    border(); // функция из библиотеки RussianText_u8g
    russian_text();
    
    u8g.sendBuffer(); // перенос данных из памяти на экран
}

void loop(void) {
  
}
