// Пример

//  ё

//  .....  1
//  .....  2    
//  .0.0.  3
//  .000.  4
//  0...0  5
//  00000  6
//  0....  7
//  .0000  8
//  .....  9


void a(uint8_t x, uint8_t y); // русская 'а'
void b(uint8_t x, uint8_t y); // русская 'б'
void v(uint8_t x, uint8_t y); // русская 'в'
void g(uint8_t x, uint8_t y); // русская 'г'
void d(uint8_t x, uint8_t y); // русская 'д'
void e(uint8_t x, uint8_t y); // русская 'е'
void io(uint8_t x, uint8_t y); // русская 'ё'
void j(uint8_t x, uint8_t y); // русская 'ж'
void z(uint8_t x, uint8_t y); // русская 'з'
void _i(uint8_t x, uint8_t y); // русская 'и'


// русская 'а'
void a(uint8_t x, uint8_t y) { 
    // а

	//  .....  1
	//  .....  2    
    //  .....  3
    //  .000.  4
    //  ....0  5
    //  .0000  6
    //  0...0  7
    //  .0000  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    // u8g.drawPixel(x+0,y+3);
    u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    u8g.drawPixel(x+3,y+3);
    // u8g.drawPixel(x+4,y+3);

    // пятая строка
    // u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    // u8g.drawPixel(x+3,y+4);
    u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    // u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    // u8g.drawPixel(x+0,y+7);
    u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    u8g.drawPixel(x+3,y+7);
    u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'б'
void b(uint8_t x, uint8_t y) { 
    // б

	//  .....  1
	//  .....  2  
    //  ....0  3
    //  .0000  4
    //  0....  5
    //  0000.  6
    //  0...0  7
    //  .000.  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    // u8g.drawPixel(x+0,y+3);
    u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    u8g.drawPixel(x+3,y+3);
    u8g.drawPixel(x+4,y+3);

    // пятая строка
    u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    // u8g.drawPixel(x+3,y+4);
    // u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    // u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    // u8g.drawPixel(x+0,y+7);
    u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    u8g.drawPixel(x+3,y+7);
    // u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'в'
void v(uint8_t x, uint8_t y) { 
    // в

	//  .....  1
	//  .....  2  
    //  .....  3
    //  000..  4
    //  0..0.  5
    //  0000.  6
    //  0...0  7
    //  0000.  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    u8g.drawPixel(x+0,y+3);
    u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    // u8g.drawPixel(x+3,y+3);
    // u8g.drawPixel(x+4,y+3);

    // пятая строка
    u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    u8g.drawPixel(x+3,y+4);
    // u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    // u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    u8g.drawPixel(x+0,y+7);
    u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    u8g.drawPixel(x+3,y+7);
    // u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'г'
void g(uint8_t x, uint8_t y) { 
    // г

	//  .....  1
	//  .....  2  
    //  .....  3
    //  00000  4
    //  0...0  5
    //  0....  6
    //  0....  7
    //  0....  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    u8g.drawPixel(x+0,y+3);
    u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    u8g.drawPixel(x+3,y+3);
    u8g.drawPixel(x+4,y+3);

    // пятая строка
    u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    // u8g.drawPixel(x+3,y+4);
    u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    u8g.drawPixel(x+0,y+5);
    // u8g.drawPixel(x+1,y+5);
    // u8g.drawPixel(x+2,y+5);
    // u8g.drawPixel(x+3,y+5);
    // u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    // u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    u8g.drawPixel(x+0,y+7);
    // u8g.drawPixel(x+1,y+7);
    // u8g.drawPixel(x+2,y+7);
    // u8g.drawPixel(x+3,y+7);
    // u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'д'
void d(uint8_t x, uint8_t y) { 
    // д

	//  .....  1
	//  .....  2 
    //  .....  3
    //  ..0..  4
    //  .000.  5
    //  .0.0.  6
    //  .0.0.  7
    //  00000  8
    //  0...0  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    // u8g.drawPixel(x+0,y+3);
    // u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    // u8g.drawPixel(x+3,y+3);
    // u8g.drawPixel(x+4,y+3);

    // пятая строка
    // u8g.drawPixel(x+0,y+4);
    u8g.drawPixel(x+1,y+4);
    u8g.drawPixel(x+2,y+4);
    u8g.drawPixel(x+3,y+4);
    // u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    // u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    // u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    // u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    // u8g.drawPixel(x+0,y+6);
    u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    u8g.drawPixel(x+3,y+6);
    // u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    u8g.drawPixel(x+0,y+7);
    u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    u8g.drawPixel(x+3,y+7);
    u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    u8g.drawPixel(x+4,y+8);

}

// русская 'е'
void e(uint8_t x, uint8_t y) { 
    // е

	//  .....  1
	//  .....  2 
    //  .....  3
    //  .000.  4
    //  0...0  5
    //  00000  6
    //  0....  7
    //  .0000  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    // u8g.drawPixel(x+0,y+3);
    u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    u8g.drawPixel(x+3,y+3);
    // u8g.drawPixel(x+4,y+3);

    // пятая строка
    u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    // u8g.drawPixel(x+3,y+4);
    u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    // u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    // u8g.drawPixel(x+0,y+7);
    u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    u8g.drawPixel(x+3,y+7);
    u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'ё'
void io(uint8_t x, uint8_t y) { 
    // ё

	//  .....  1
	//  .....  2 
    //  .0.0.  3
    //  .000.  4
    //  0...0  5
    //  00000  6
    //  0....  7
    //  .0000  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    // u8g.drawPixel(x+0,y+3);
    u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    u8g.drawPixel(x+3,y+3);
    // u8g.drawPixel(x+4,y+3);

    // пятая строка
    u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    // u8g.drawPixel(x+3,y+4);
    u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    // u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    // u8g.drawPixel(x+0,y+7);
    u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    u8g.drawPixel(x+3,y+7);
    u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'ж'
void j(uint8_t x, uint8_t y) { 
    // ж

	//  .....  1
	//  .....  2 
    //  .....  3
    //  0.0.0  4
    //  0.0.0  5
    //  .000.  6
    //  0.0.0  7
    //  0.0.0  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    u8g.drawPixel(x+0,y+3);
    // u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    // u8g.drawPixel(x+3,y+3);
    u8g.drawPixel(x+4,y+3);

    // пятая строка
    u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    u8g.drawPixel(x+2,y+4);
    // u8g.drawPixel(x+3,y+4);
    u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    // u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    // u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    u8g.drawPixel(x+0,y+7);
    // u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    // u8g.drawPixel(x+3,y+7);
    u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'з'
void z(uint8_t x, uint8_t y) { 
    // з

	//  .....  1
	//  .....  2 
    //  .....  3
    //  00000  4
    //  ....0  5
    //  .000.  6
    //  ....0  7
    //  00000  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    u8g.drawPixel(x+0,y+3);
    u8g.drawPixel(x+1,y+3);
    u8g.drawPixel(x+2,y+3);
    u8g.drawPixel(x+3,y+3);
    u8g.drawPixel(x+4,y+3);

    // пятая строка
    // u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    // u8g.drawPixel(x+3,y+4);
    u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    // u8g.drawPixel(x+0,y+5);
    u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    u8g.drawPixel(x+3,y+5);
    // u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    // u8g.drawPixel(x+0,y+6);
    // u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    u8g.drawPixel(x+0,y+7);
    u8g.drawPixel(x+1,y+7);
    u8g.drawPixel(x+2,y+7);
    u8g.drawPixel(x+3,y+7);
    u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}

// русская 'и'
void _i(uint8_t x, uint8_t y) { 
    // и

	//  .....  1
	//  .....  2 
    //  .....  3
    //  0...0  4
    //  0..00  5
    //  0.0.0  6
    //  00..0  7
    //  0...0  8
    //  .....  9

    // вывод построчно
    
    // первая строка
    // u8g.drawPixel(x+0,y);
    // u8g.drawPixel(x+1,y);
    // u8g.drawPixel(x+2,y);
    // u8g.drawPixel(x+3,y);
    // u8g.drawPixel(x+4,y);

    // вторая строка
    // u8g.drawPixel(x+0,y+1);
    // u8g.drawPixel(x+1,y+1);
    // u8g.drawPixel(x+2,y+1);
    // u8g.drawPixel(x+3,y+1);
    // u8g.drawPixel(x+4,y+1);

    // третья строка
    // u8g.drawPixel(x+0,y+2);
    // u8g.drawPixel(x+1,y+2);
    // u8g.drawPixel(x+2,y+2);
    // u8g.drawPixel(x+3,y+2);
    // u8g.drawPixel(x+4,y+2);

    // четвёртая строка
    u8g.drawPixel(x+0,y+3);
    // u8g.drawPixel(x+1,y+3);
    // u8g.drawPixel(x+2,y+3);
    // u8g.drawPixel(x+3,y+3);
    u8g.drawPixel(x+4,y+3);

    // пятая строка
    u8g.drawPixel(x+0,y+4);
    // u8g.drawPixel(x+1,y+4);
    // u8g.drawPixel(x+2,y+4);
    u8g.drawPixel(x+3,y+4);
    u8g.drawPixel(x+4,y+4);
    
    // шестая строка
    u8g.drawPixel(x+0,y+5);
    // u8g.drawPixel(x+1,y+5);
    u8g.drawPixel(x+2,y+5);
    // u8g.drawPixel(x+3,y+5);
    u8g.drawPixel(x+4,y+5);
    
    // седьмая строка
    u8g.drawPixel(x+0,y+6);
    u8g.drawPixel(x+1,y+6);
    // u8g.drawPixel(x+2,y+6);
    // u8g.drawPixel(x+3,y+6);
    u8g.drawPixel(x+4,y+6);
    
    // восьмая строка
    u8g.drawPixel(x+0,y+7);
    // u8g.drawPixel(x+1,y+7);
    // u8g.drawPixel(x+2,y+7);
    // u8g.drawPixel(x+3,y+7);
    u8g.drawPixel(x+4,y+7);
   
    // девятая строка
    // u8g.drawPixel(x+0,y+8);
    // u8g.drawPixel(x+1,y+8);
    // u8g.drawPixel(x+2,y+8);
    // u8g.drawPixel(x+3,y+8);
    // u8g.drawPixel(x+4,y+8);

}
