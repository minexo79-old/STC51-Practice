#include <STC/STC89C5xRC.H>

void delayms(int tx) {
    char ti;
    while(tx--) {
        for(ti=0;ti<101;ti++);
    }
}

void main (void) {
    char pin = 0x10;

    P0 = 0xFF;  // P0 Input

    while(1) {
        if(P00 == 0x00) {
            P2 = ~pin;
            pin = (pin == 0x01) ? 0x10 : pin >> 1;
            delayms(100);
        } else if(P01 == 0x00) {
            P2 = ~pin;
            pin = (pin == 0x10) ? 0x01 : pin << 1;
            delayms(100);
        }
    }
}