
// Arduino Nano
// for SSD1306_128X32
// or SSD1306_128X64


// разкомментировать под необходимый экран
// #define SSD1306_128X32
#define SSD1306_128X64


#include <U8glib.h>

#ifdef SSD1306_128X32
U8GLIB_SSD1306_128X32 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);  // I2C / TWI
#else
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);  // I2C / TWI
#endif 

// подключаем обязательно после создания класса u8g
#include <RussianText_u8g.h>


void russian_text(bool _border = false);


void setup(void) {
    u8g.firstPage();
    do {
        u8g_prepare();
        
        russian_text(true);
    
    } while( u8g.nextPage() );
}

void loop(void) {}


// вывод русских букв на экран
void russian_text(bool _border) {

    if (_border) border(); // функция из библиотеки RussianText_u8g

    send("абвгдеёжзийклмн", 5+OFFSET, 5);
    send("опрст", 5+OFFSET, 20);
    send("АБВГДЕЁЖЗИЙКЛМН", 5+OFFSET, 35);
    send("ОПРСТ", 5+OFFSET, 50);
    
}