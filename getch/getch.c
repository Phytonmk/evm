#include <termios.h>
#include <stdio.h>

static struct termios settings;

int isTerminalSetupCompleted = false;

char getch(void)
{
    if (!isTerminalSetupCompleted)
    {
        tcgetattr(0, &settings);
        settings.c_lflag &= ~ICANON;
        settings.c_lflag &= ~ECHO;
        tcsetattr(0, TCSANOW, &settings);
        isTerminalSetupCompleted = true;
    }
    return getchar();
}
