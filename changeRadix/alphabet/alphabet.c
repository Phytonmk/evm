#include "alphabet.h"

int getIndexInAlphabet(char symbol)
{
    for (int i = 0; i < 36; i++)
    {
        if (symbol == alphabet[i])
            return i;
    }

    return 0;
}