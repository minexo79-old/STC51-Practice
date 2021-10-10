#include <STC/STC89C5xRC.H>

void delayms(int tx) {
    char ti;
    while(tx--) {
        for(ti=0;ti<101;ti++);
    }
}

void main (void) {
    while(1) {
        P20 = 0x00;
        delayms(100);
        P20 = 0x01;
        delayms(100); 
    }
}