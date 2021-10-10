# 05-GPIO

課程參考：[DELTA MOOCx 開放式課程](https://univ.deltamoocx.net/)

## mainProgram0501.c
功能：重複P2.0閃爍，間隔0.1s。
## mainProgram0502.c
功能：接入七段顯示器，重複從F顯示到0，間隔0.1s。
## mainProgram0503.c
功能：使用兩顆按鈕，分別為P00及P01。按下P00會讓P2從0輸出到4，按下P01會讓P2從4倒回至0，間隔0.1s。

## delay Function 
```c
void delayms(int tx) {
    char ti;
    while(tx--) {
        for(ti=0;ti<101;ti++);
    }
}
```