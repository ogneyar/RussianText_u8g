// Arduino Nano
// for SSD1306_128X64


#include <U8glib.h>
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);	// I2C / TWI 

// подключаем обязательно после создания класса u8g
#include <RussianText_u8g.h>


void russian_text(void) {
  
  u8g.firstPage();
  do {
    u8g_prepare();
    
    // вывод русских букв на экран
    send("абвгд", 0, 0);
    send("абвгдеёж", 0, 10);
    send("абвгдеёжзий", 0, 20); 

    send("АБВГД", 0, 30);
    send("АБВГДЕЁЖ", 0, 40);
    send("АБВГДЕЁЖЗИЙ", 0, 50);

    
    u8g.drawLine(0, 0, 127, 0);
    u8g.drawLine(0, 63, 127, 63);
    
  } while( u8g.nextPage() );
  
}

void setup(void) {
  russian_text();
}

void loop(void) {
}
