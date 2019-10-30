#include <math.h>
#include "../userConfig/userConfig.h"

int accuracy = 10;
int rounder = 10000;

unsigned long long convToDecNum(char src[], int base, bool isInteger)
{

    char *srcstr;
    int length = 0;
    unsigned long long decnum = 0;
    int i;

    for (srcstr = src; *srcstr != '\0'; srcstr++)
    {
        length++;
    }

    srcstr = src;
    for (i = 0; i < length; i++, srcstr++)
    {
        int symbolValue = 0;
        // Compare *srcstr with ASCII values
        if (*srcstr >= '0' && *srcstr <= '9') // is *srcstr Between 0-9
        {
            symbolValue = (((int)(*srcstr)) - '0');
        }
        else if ((*srcstr >= 'A' && *srcstr <= 'Z')) // is *srcstr Between A-Z
        {
            symbolValue = (((int)(*srcstr)) - 'A' + 10);
        }
        else if (*srcstr >= 'a' && *srcstr <= 'z') // is *srcstr Between a-z
        {
            symbolValue = (((int)(*srcstr)) - 'a' + 10);
        }
        if (isInteger)
        {
            decnum += symbolValue * pow(base, length - i - 1);
        }
        else
        {

            decnum += symbolValue * rounder / pow(base, 1 * (1 + i));
        }
    }
    return decnum;
}
int getValueLength(unsigned long long value, int base)
{
    if (value == 0)
        return 0;
    int length = log(value) / log(base);
    length++;
    return length;
}
void convert(char src[], char dest[], int from, int to, int mantissa)
{
    char integerStringPart[10000] = {'\0'};
    char floatingStringPart[10000] = {'\0'};
    int srcStringLength = 0;
    while (*(src + srcStringLength) != '\0')
        srcStringLength++;
    int i = 0;
    for (; mantissa == 0 ? (i <= srcStringLength) : (i < srcStringLength - mantissa - 1); i++)
    {
        *(integerStringPart + i) = *(src + i);
    }
    for (i = 0; i < mantissa; i++)
    {
        *(floatingStringPart + i) = *(src + srcStringLength - mantissa + i);
    }
    unsigned long long int integerPartValue = convToDecNum(integerStringPart, from);
    int integerPartLength = getValueLength(integerPartValue, to);
    unsigned long long int floatingPartValue = convToDecNum(floatingStringPart, from, false);
    int floatingPartLength = getValueLength(maxDecimalValue, to) - integerPartLength - 1;

    int symbol = integerPartLength - 1;
    *(dest + symbol + 1) = '\0';
    while (integerPartValue > 0)
    {
        char newSymbol = '0';
        int symbolValue = integerPartValue % to;
        if (symbolValue > 9)
        {
            newSymbol = 'a' + symbolValue;
        }
        else
        {
            newSymbol = '0' + symbolValue;
        }
        *(dest + symbol) = newSymbol;
        symbol--;
        integerPartValue /= to;
    }
    *(dest + integerPartLength) = '\0';
    if (floatingPartValue > 0)
    {
        *(dest + integerPartLength) = '.';
        *(dest + integerPartLength + 1) = '\0';
        integerPartLength++;
        symbol = integerPartLength;
        for (i = 0; i < accuracy && floatingPartValue > 0; i++)
        {
            char newSymbol = '0';
            floatingPartValue *= to;
            // int tailLength = getValueLength(floatingPartValue, 10) - 1;
            // int valueTail = pow(10, tailLength);
            int symbolValue = (floatingPartValue / (rounder)) % to;
            // int symbolValue = (floatingPartValue) / (pow(10, floatingPartLength));

            if (symbolValue > 9)
            {
                newSymbol = 'a' + symbolValue;
            }
            else
            {
                newSymbol = '0' + symbolValue;
            }
            *(dest + symbol) = newSymbol;
            *(dest + symbol + 1) = '\0';
            symbol++;
            // int headLength = getValueLength(floatingPartValue, 10) - 1;
            // int valueHead = pow(10, headLength);
            floatingPartValue %= rounder;
            // floatingPartValue = (floatingPartValue - symbolValue * (pow(10, floatingPartLength))) * to;
        }
        for (i = symbol; i > 0 && *(dest + i) == '0'; i--)
        {
            if (*(dest + i) == '.')
            {
                *(dest + i) = '\0';
                break;
            }
            else
            {
                *(dest + i) = '\0';
            }
        }
    }
}

void extractMantissa(char src[], char dist[], int *mantissa)
{
    int length = 0;
    int srcLength = 0;
    int mantissaIndexFromStart = -1;
    for (int i = 0; *(src + i) != '\0'; i++)
    {
        if (*(src + i) == '.')
        {
            mantissaIndexFromStart = i + 1;
        }
        if (*(src + i) != '-' && *(src + i) != '.')
        {
            *(dist + length) = *(src + i);
            *(dist + length + 1) = '\0';
            length++;
        }
        srcLength++;
    }
    if (mantissaIndexFromStart != -1)
    {
        *mantissa = srcLength - mantissaIndexFromStart;
    }
}

void toDecimal(char src[], char dest[], int base)
{
    int mantissa = 0;
    char clearedSrc[10000] = {'\0'};
    extractMantissa(src, clearedSrc, &mantissa);
    convert(src, dest, base, 10, mantissa);
}

void toBinary(char src[], char dest[], int base)
{
    int mantissa = 0;
    char clearedSrc[10000] = {'\0'};
    extractMantissa(src, clearedSrc, &mantissa);
    convert(src, dest, base, 2, mantissa);
}
