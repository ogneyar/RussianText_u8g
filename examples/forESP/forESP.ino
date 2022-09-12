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

void russian_text(byte _mode = ALLCASE, bool _border = false);

void setup(void) {
    u8g.begin();
    russian_text();
    delay(2000);
}

void loop(void) {
    russian_text(LOWERCASE, true);
    delay(1000);
    russian_text(UPPERCASE);
    delay(1000);
}


// вывод всех русских символов на экран
void russian_text(byte _mode, bool _border) {
    u8g.clearBuffer(); // очистка экрана
    
    if (_border) border(); // функция из библиотеки RussianText_u8g

    switch(_mode) {
      case LOWERCASE:
        // функция send из библиотеки RussianText_u8g
        send("абвгдеёжзийклмно", 5+OFFSET, 5); // OFFSET можно убрать
        send("прст", 5+OFFSET, 15);
      break;
      case UPPERCASE:
        send("АБВГДЕЁЖЗИЙКЛМНО", 5+OFFSET, 5);
        send("ПРСТ", 5+OFFSET, 15);
      break;
      case ALLCASE:
        send("абвгдеёжзийклмнопрст", 2+OFFSET, 5);
        send("АБВГДЕЁЖЗИЙКЛМНОПРСТ", 2+OFFSET, 18);
      break;
    }    
    
    u8g.sendBuffer(); // перенос данных из памяти на экран
}
