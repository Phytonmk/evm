#include "../cursor/cursor.h"
#include <iostream>
#include <sys/ioctl.h>
#include <time.h>

int perCharDuration = 300;

char prevLabel[10000] = {'\0'};

void showAnimatedLabel(char *label, int targetXStart, int targetYStart)
{
    int prevLabelLength = 0;
    int originalLabelLength = 0;
    while (prevLabel[prevLabelLength] != '\0')
        prevLabelLength++;
    while (*(label + originalLabelLength) != '\0')
        originalLabelLength++;

    struct winsize windowSize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &windowSize);

    int nonUniqueSymbolsCount = 0;
    int i;
    for (i = 0; prevLabel[i] != '\0' && prevLabel[i] == *(label + i); i++)
        nonUniqueSymbolsCount++;
    
    if (originalLabelLength <= nonUniqueSymbolsCount)
    {
        moveCursor(targetXStart, targetYStart);
        std::cout << label << std::flush;
        int i;
        for (i = 0; *(label + i) != '\0'; i++)
        {
            *(prevLabel + i) = *(label + i);
        }

        *(prevLabel + i) = '\0';
        return;
    }

    char prevLabelOutput[10000] = {'\0'};
    for (i = 0; i < nonUniqueSymbolsCount; i++)
        prevLabelOutput[i] = prevLabel[i];
    prevLabelOutput[i] = '\0';
    moveCursor(targetXStart, targetYStart);
    std::cout << prevLabelOutput << std::flush;
    for (i = 0; *(label + i) != '\0'; i++)
    {
        *(prevLabel + i) = *(label + i);
    }
    *(prevLabel + i) = '\0';
    for (i = 0; *(label + i + nonUniqueSymbolsCount) != '\0'; i++)
    {
        *(label + i) = *(label + i + nonUniqueSymbolsCount);
    }
    *(label + i) = '\0';

    targetXStart += nonUniqueSymbolsCount;

    int length = 0;
    while (*(label + length) != '\0')
        length++;

    int printLength = 0;

    int initX[length]; // = 50; //windowSize.ws_row;
    int initY[length]; // = targetYStart;
    int x[length];
    int y[length];
    int prevX[length];
    int prevY[length];
    int targetX[length];
    int targetY[length];
    for (i = 0; i < length; i++)
    {
        initX[i] = 50 + i * 3;
        initY[i] = targetYStart;
        x[i] = initX[i];
        y[i] = initY[i];
        prevX[i] = initX[i];
        prevY[i] = initY[i];
        targetX[i] = targetXStart + i;
        targetY[i] = targetYStart;
    }

    struct timespec ts;
    ts.tv_sec = 1 / 1000;
    ts.tv_nsec = (1 % 1000) * 1000000;
    for (int time = 0; time <= perCharDuration; time++)
    {
        for (int i = 0; i < length; i++)
        {
            moveCursor(prevX[i], prevY[i]);
            putchar(' ');
        }
        float animationPart = float(time) / float(perCharDuration);
        for (int i = 0; i < length /* * (time / (perCharDuration * length))*/; i++)
        {
            x[i] = initX[i] + (targetX[i] - initX[i]) * animationPart;
            y[i] = initY[i] + (targetY[i] - initY[i]) * animationPart;
            moveCursor(x[i], y[i]);
            std::cout << (label[i]) << std::flush;
            prevX[i] = x[i];
            prevY[i] = y[i];
        }
        // sleep(1);
        nanosleep(&ts, NULL);
    }
}
