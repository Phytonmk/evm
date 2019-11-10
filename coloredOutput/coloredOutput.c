#include "../cursor/cursor.h"
#include <iostream>

void coloredOutput(char *label, int x, int y, int charIndex)
{
    char output[10000] = {'\0'};
    int outputLength = 0;
    for (int i = 0; *(label + i) != '\0'; i++)
    {
        output[outputLength] = '\033';
        outputLength++;
        output[outputLength] = '[';
        outputLength++;
        output[outputLength] = '0';
        outputLength++;
        output[outputLength] = ';';
        outputLength++;
        if (charIndex + i >= invertFrom && charIndex + i < invertFrom + invertCount)
        {

            output[outputLength] = '3';
            outputLength++;
            output[outputLength] = '3';
            outputLength++;
        }
        else if (*(label + i) == '0')
        {
            output[outputLength] = '3';
            outputLength++;
            output[outputLength] = '1';
            outputLength++;
        }
        else if (*(label + i) == '1')
        {
            output[outputLength] = '3';
            outputLength++;
            output[outputLength] = '2';
            outputLength++;
        }
        else
        {
            output[outputLength] = '3';
            outputLength++;
            output[outputLength] = '0';
            outputLength++;
        }
        output[outputLength] = 'm';
        outputLength++;

        output[outputLength] = *(label + i);
        outputLength++;

        output[outputLength] = '\033';
        outputLength++;
        output[outputLength] = '[';
        outputLength++;
        output[outputLength] = '0';
        outputLength++;
        output[outputLength] = 'm';
        outputLength++;
    }
    output[outputLength] = '\0';
    moveCursor(x, y);
    std::cout << output << std::flush;
}