#include <stdio.h>
#include <termios.h>
#include <unistd.h>

void moveCursor(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x + 1);
    // printf("\033[%d;%dH", YPos + 1, XPos + 1);
}