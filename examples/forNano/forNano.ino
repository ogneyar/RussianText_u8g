
// Arduino Nano
// for SSD1306_128X32
// or SSD1306_128X64
// I2C or SPI


// разкомментировать под необходимый экран
#define SSD1306_128X32_I2C
// #define SSD1306_128X64_I2C
// #define SSD1306_128X64_SPI

#include <U8glib.h>

#ifdef SSD1306_128X32_I2C
#define SSD1306_128X32
U8GLIB_SSD1306_128X32 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);  // I2C / TWI
#endif 
#ifdef SSD1306_128X64_I2C
#define SSD1306_128X64
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);  // I2C / TWI
#endif 
#ifdef SSD1306_128X64_SPI
#define SSD1306_128X64
U8GLIB_SSD1306_128X64 u8g(/* SCK */ 13,/* MOSI */ 11,/* CS */ 10,/* DS */ 9,/* RESET */ 8);	// SPI
#endif 

// подключаем обязательно после создания класса u8g
#include <RussianText_u8g.h>


void russian_text(byte _mode = ALLCASE, bool _border = false);


void setup(void) {
    russian_text();
    delay(2000);
}

void loop(void) {
    russian_text(LOWERCASE, true);
    delay(1000);
    russian_text(UPPERCASE);
    delay(1000);
}


// вывод русских букв на экран
void russian_text(byte _mode, bool _border) {

    u8g.firstPage();
    do {
        u8g_prepare();

        if (_border) border(); // функция из библиотеки RussianText_u8g

        // send("абвгдеёжзийклмноп", 5+OFFSET, 5);
        // send("рстуфхцчшщъыьэюя", 5+OFFSET, 20);
        // send("АБВГДЕЁЖЗИЙКЛМНОП", 5+OFFSET, 35);
        // send("РСТУФХЦЧШЩЪЫЬЭЮЯ", 5+OFFSET, 50);

        switch(_mode) {
        case LOWERCASE:
            // функция send из библиотеки RussianText_u8g
            send("абвгдеёжзийклмноп", 5+OFFSET, 5); // OFFSET можно убрать
            send("рстуфхцчшщъыьэюя", 5+OFFSET, 15);
        break;
        case UPPERCASE:
            send("АБВГДЕЁЖЗИЙКЛМНОП", 5+OFFSET, 5);
            send("РСТУФХЦЧШЩЪЫЬЭЮЯ", 5+OFFSET, 15);
        break;
        case ALLCASE:
            send("абвгдеёжзийклмнопрст", 2+OFFSET, 5);
            send("АБВГДЕЁЖЗИЙКЛМНОПРСТ", 2+OFFSET, 18);
        break;
        }    
    
    
    } while( u8g.nextPage() );
    
}