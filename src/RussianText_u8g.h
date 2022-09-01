

void send(char* str, uint8_t x, uint8_t y);

#include "max.h" // заглавные
#include "min.h" // строчные


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
            io(x, y);
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
        if ( ( (str[i] & 0x00ff) == ('А'>>8 & 0x00ff) ) && ( (str[i+1] & 0x00ff) == ('А' & 0x00ff) ) ) {
            A(x, y);
        }
   
        i = i + 2;
        x = x + 8;
    }
}

