#include "../cursor/cursor.h"
#include "../getch/getch.h"
#include <iostream>
#include <math.h>

int rangeInput(int x, int y, int from, int to, bool echo)
{
    int value = 0;
    moveCursor(x, y);
    bool touched = false;
    while (true)
    {
        int maxInput = -1;
        int minInput = 10;
        for (int i = 0; i < 10; i++)
        {
            if (value * 10 + i >= from && value * 10 + i <= to)
            {
                maxInput = i;
            }
        }
        for (int i = 9; i >= 0; i--)
        {
            if (/*value * 10 + i >= from && */ value * 10 + i <= to)
            {
                minInput = i;
            }
        }
        moveCursor(x, y);
        std::cout << "                                    " << std::flush;
        moveCursor(x, y);
        if (value > 0 || touched)
        {
            std::cout << value << std::flush;
        }
        std::cout << "    " << std::flush;
        if (maxInput == -1 && minInput == 10)
        {
            if (value >= from && value <= to)
            {
                std::cout << "(press enter to continue)" << std::flush;
            }
            else
            {
                std::cout << "(must be " << from << "-" << to << ")";
            }
        }
        else
        {
            std::cout << "(" << from << " - " << to << ")" << std::flush;
        }

        moveCursor(x, y);
        if (value > 0 || touched)
        {
            std::cout << value << std::flush;
        }

        char inputSymbol = getch();
        touched = true;

        if (inputSymbol >= '0' && inputSymbol <= '9')
        {
            int inputValue = inputSymbol - '0';
            if (inputValue >= minInput && inputValue <= maxInput)
            {
                value = value * 10 + inputValue;
            }
        }
        else if (inputSymbol == 127)
        {
            value /= 10;
            if (value == 0)
                touched = false;
        }
        else if (inputSymbol == '\n' && value >= from && value <= to)
        {
            moveCursor(x, y);
            std::cout << "                                    " << std::flush;
            moveCursor(x, y);
            if (echo)
            {
                std::cout << value;
            }
            return value;
        }
        else if (inputSymbol == '\t')
        {
            return -1;
        }
    }
    return value;
}