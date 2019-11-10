#include "../cursor/cursor.h"
#include <iostream>
#include <sys/ioctl.h>
#include <time.h>
#include <thread>

struct winsize w;

void printCharWorker(char symbol, int targetX, int targetY, int printDuration)
{
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    int initX = w.ws_row;
    int initY = targetY;
    int x = initX;
    int y = initY;
    int prevX = x;
    int prevY = y;
    // for (int time = 0; time < printDuration; time++)
    // {
    //     moveCursor(prevX, prevY);
    //     struct timespec ts;
    //     ts.tv_sec = time / 1000;
    //     ts.tv_nsec = (time % 1000) * 1000000;
    //     // nanosleep(&ts, NULL);
    //     putchar(' ');
    //     float animationPart = time / printDuration;
    //     x = initX + (targetX - initX) * animationPart;
    //     y = initY + (targetY - initY) * animationPart;
    //     moveCursor(x, y);
    //     putchar(symbol);
    //     prevX = x;
    //     prevY = y;
    // }
}
