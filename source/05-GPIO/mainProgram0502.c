#include <STC/STC89C5xRC.H>

void delayms(int);

char SEG_Table[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66,   // 0 ~ 5
                    0x6d, 0x7c, 0x07, 0x7f, 0x67,   // 6 ~ 9
                    0x77, 0x7c, 0x39, 0x5e, 0x79,   // A ~ F
                    0x71};


void main(void) {
    char i = 15;

    while(1) {
        P2 = ~SEG_Table[i];
        i = (i == 0) ? i = 15 : i - 1;
        delayms(500);
    }
}

void delayms(int tx) {
    char ti;
    while(tx--) {
        for(ti=0;ti<101;ti++);
    }
}