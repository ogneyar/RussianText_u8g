#pragma once 

// список функций
// void u8g_prepare(void);
// void border(void);
// void send(char* str, uint8_t x, uint8_t y);

#define SCREEN_WIDTH 0
#define SCREEN_HIGHT 0
#define OFFSET 0
#define LOWERCASE 0
#define UPPERCASE 1
#define ALLCASE 2

#ifdef SSD1306_128X32
#define SCREEN_WIDTH 128
#define SCREEN_HIGHT 32
#define OFFSET 0
#endif
#ifdef SSD1306_128X64
#define SCREEN_WIDTH 128
#define SCREEN_HIGHT 64
#define OFFSET 2 // сдвиг координат, связан с некорректным выводом информации (может только у меня)
#endif

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

#include "uppercase.h" // заглавные
#include "lowercase.h" // строчные


// подготовка экрана
void u8g_prepare(void) {
    u8g.setFont(u8g_font_6x10);
    u8g.setFontRefHeightExtendedText();
    u8g.setFontPosTop();
}

// вывод рамки на экран
void border(void) { 
    u8g.drawLine(0+OFFSET, 0, 0+OFFSET, SCREEN_HIGHT-1); // линия рамки слева  
    u8g.drawLine(0+OFFSET, 0, SCREEN_WIDTH-1, 0); // линия рамки сверху
    u8g.drawLine(SCREEN_WIDTH-1, 0, SCREEN_WIDTH-1, SCREEN_HIGHT-1); // линия рамки справа
    u8g.drawLine(0+OFFSET, SCREEN_HIGHT-1, SCREEN_WIDTH-1, SCREEN_HIGHT-1); // линия рамки снизу
}

// вывод на кран русских символоов
void send(char * str, uint8_t x, uint8_t y) {

    uint8_t i = 0;
    while (str[i]) {
        if ( ( (str[i] & 0x00ff) == ('а'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('а' & 0x00ff) ) ) {
            a(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('б'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('б' & 0x00ff) ) ) {
            b(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('в'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('в' & 0x00ff) ) ) {
            v(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('г'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('г' & 0x00ff) ) ) {
            g(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('д'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('д' & 0x00ff) ) ) {
            d(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('е'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('е' & 0x00ff) ) ) {
            ye(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ё'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ё' & 0x00ff) ) ) {
            yo(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ж'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ж' & 0x00ff) ) ) {
            j(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('з'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('з' & 0x00ff) ) ) {
            z(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('и'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('и' & 0x00ff) ) ) {
            _i(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('й'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('й' & 0x00ff) ) ) {
            iy(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('к'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('к' & 0x00ff) ) ) {
            k(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('л'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('л' & 0x00ff) ) ) {
            l(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('м'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('м' & 0x00ff) ) ) {
            m(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('н'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('н' & 0x00ff) ) ) {
            n(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('о'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('о' & 0x00ff) ) ) {
            o(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('п'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('п' & 0x00ff) ) ) {
            p(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('р'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('р' & 0x00ff) ) ) {
            r(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('с'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('с' & 0x00ff) ) ) {
            s(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('т'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('т' & 0x00ff) ) ) {
            t(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('у'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('у' & 0x00ff) ) ) {
            u(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ф'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ф' & 0x00ff) ) ) {
            f(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('х'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('х' & 0x00ff) ) ) {
            h(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ц'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ц' & 0x00ff) ) ) {
            c(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ч'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ч' & 0x00ff) ) ) {
            ch(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ш'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ш' & 0x00ff) ) ) {
            sh(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('щ'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('щ' & 0x00ff) ) ) {
            sch(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ъ'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ъ' & 0x00ff) ) ) {
            er(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ы'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ы' & 0x00ff) ) ) {
            eri(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ь'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ь' & 0x00ff) ) ) {
            ere(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('э'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('э' & 0x00ff) ) ) {
            e(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('ю'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('ю' & 0x00ff) ) ) {
            yu(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('я'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('я' & 0x00ff) ) ) {
            ya(x, y);
        }
        
        else 
        if ( ( (str[i] & 0x00ff) == ('А'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('А' & 0x00ff) ) ) {
            A(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Б'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Б' & 0x00ff) ) ) {
            B(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('В'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('В' & 0x00ff) ) ) {
            V(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Г'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Г' & 0x00ff) ) ) {
            G(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Д'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Д' & 0x00ff) ) ) {
            D(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Е'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Е' & 0x00ff) ) ) {
            YE(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ё'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ё' & 0x00ff) ) ) {
            YO(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ж'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ж' & 0x00ff) ) ) {
            J(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('З'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('З' & 0x00ff) ) ) {
            Z(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('И'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('И' & 0x00ff) ) ) {
            I(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Й'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Й' & 0x00ff) ) ) {
            IY(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('К'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('К' & 0x00ff) ) ) {
            K(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Л'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Л' & 0x00ff) ) ) {
            L(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('М'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('М' & 0x00ff) ) ) {
            M(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Н'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Н' & 0x00ff) ) ) {
            N(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('О'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('О' & 0x00ff) ) ) {
            O(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('П'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('П' & 0x00ff) ) ) {
            P(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Р'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Р' & 0x00ff) ) ) {
            R(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('С'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('С' & 0x00ff) ) ) {
            S(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Т'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Т' & 0x00ff) ) ) {
            T(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('У'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('У' & 0x00ff) ) ) {
            U(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ф'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ф' & 0x00ff) ) ) {
            _F(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Х'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Х' & 0x00ff) ) ) {
            H(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ц'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ц' & 0x00ff) ) ) {
            C(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ч'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ч' & 0x00ff) ) ) {
            CH(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ш'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ш' & 0x00ff) ) ) {
            SH(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Щ'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Щ' & 0x00ff) ) ) {
            SCH(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ъ'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ъ' & 0x00ff) ) ) {
            ER(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ы'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ы' & 0x00ff) ) ) {
            ERI(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ь'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ь' & 0x00ff) ) ) {
            ERE(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Э'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Э' & 0x00ff) ) ) {
            E(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Ю'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Ю' & 0x00ff) ) ) {
            YU(x, y);
        }else 
        if ( ( (str[i] & 0x00ff) == ('Я'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('Я' & 0x00ff) ) ) {
            YA(x, y);
        }
   
        i = i + 2;
        x = x + 7;
    }
}

