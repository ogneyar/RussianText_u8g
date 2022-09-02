

// void send(char* str, uint8_t x, uint8_t y);

#include "uppercase.h" // заглавные
#include "lowercase.h" // строчные


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
            e(x, y);
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
            E(x, y);
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
        }
   
        i = i + 2;
        x = x + 8;
    }
}

