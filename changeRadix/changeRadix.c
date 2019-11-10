#include <math.h>
#include <iostream>
#include <sstream>
#include "../userConfig/userConfig.h"
#include <limits.h>

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

int getValueLength(unsigned long long value, int base)
{
    if (value == 0)
        return 0;
    int length = log(value) / log(base);
    length++;
    return length;
}
void changeRadix(char messySrc[], char decimalDest[], char binaryDest[])
{
    int mantissa = 0;
    char src[10000] = {'\0'};
    extractMantissa(messySrc, src, &mantissa);
    int length = 0;

    for (int i = 0; *(src + i) != '\0'; i++)
    {
        length++;
    }

    union {
        char type0;
        signed char type1;
        short type2;
        short int type3;
        signed short type4;
        signed short int type5;
        unsigned short type6;
        unsigned short int type7;
        int type8;
        signed int type9;
        unsigned int type10;
        long type11;
        long int type12;
        signed long type13;
        signed long int type14;
        unsigned long type15;
        unsigned long int type16;
        long long type17;
        long long int type18;
        signed long long type19;
        signed long long int type20;
        unsigned long long type21;
        unsigned long long int type22;
        float type23;
        double type24;
        unsigned long long int sys;
    } decimalValue;

    decimalValue.type0 = 0;
    decimalValue.type1 = 0;
    decimalValue.type2 = 0;
    decimalValue.type3 = 0;
    decimalValue.type4 = 0;
    decimalValue.type5 = 0;
    decimalValue.type6 = 0;
    decimalValue.type7 = 0;
    decimalValue.type8 = 0;
    decimalValue.type9 = 0;
    decimalValue.type10 = 0;
    decimalValue.type11 = 0;
    decimalValue.type12 = 0;
    decimalValue.type13 = 0;
    decimalValue.type14 = 0;
    decimalValue.type15 = 0;
    decimalValue.type16 = 0;
    decimalValue.type17 = 0;
    decimalValue.type18 = 0;
    decimalValue.type19 = 0;
    decimalValue.type20 = 0;
    decimalValue.type21 = 0;
    decimalValue.type22 = 0;
    decimalValue.type23 = 0;
    decimalValue.type24 = 0;
    decimalValue.sys = 0;

    for (int i = 0; i < length; i++)
    {
        int symbolValue = 0;
        // Compare *srcstr with ASCII values
        if (*(src + i) >= '0' && *(src + i) <= '9') // is *srcstr Between 0-9
        {
            symbolValue = (((int)(*(src + i))) - '0');
        }
        else if ((*(src + i) >= 'A' && *(src + i) <= 'Z')) // is *srcstr Between A-Z
        {
            symbolValue = (((int)(*(src + i))) - 'A' + 10);
        }
        else if (*(src + i) >= 'a' && *(src + i) <= 'z') // is *srcstr Between a-z
        {
            symbolValue = (((int)(*(src + i))) - 'a' + 10);
        }

        long double addedValue = 0;

        if (i <= length - mantissa)
        {
            addedValue = symbolValue * pow(base, length - i - 1 - mantissa);
        }
        else
        {

            addedValue = symbolValue / pow(base, i);
        }
        if (dataTypeIndex == 0)
        {
            decimalValue.type0 = isNegative ? (decimalValue.type0 - addedValue) : (decimalValue.type0 + addedValue);
        }
        else if (dataTypeIndex == 1)
        {
            decimalValue.type1 = isNegative ? (decimalValue.type1 - addedValue) : (decimalValue.type1 + addedValue);
        }
        else if (dataTypeIndex == 2)
        {
            decimalValue.type2 = isNegative ? (decimalValue.type2 - addedValue) : (decimalValue.type2 + addedValue);
        }
        else if (dataTypeIndex == 3)
        {
            decimalValue.type3 = isNegative ? (decimalValue.type3 - addedValue) : (decimalValue.type3 + addedValue);
        }
        else if (dataTypeIndex == 4)
        {
            decimalValue.type4 = isNegative ? (decimalValue.type4 - addedValue) : (decimalValue.type4 + addedValue);
        }
        else if (dataTypeIndex == 5)
        {
            decimalValue.type5 = isNegative ? (decimalValue.type5 - addedValue) : (decimalValue.type5 + addedValue);
        }
        else if (dataTypeIndex == 6)
        {
            decimalValue.type6 = isNegative ? (decimalValue.type6 - addedValue) : (decimalValue.type6 + addedValue);
        }
        else if (dataTypeIndex == 7)
        {
            decimalValue.type7 = isNegative ? (decimalValue.type7 - addedValue) : (decimalValue.type7 + addedValue);
        }
        else if (dataTypeIndex == 8)
        {
            decimalValue.type8 = isNegative ? (decimalValue.type8 - addedValue) : (decimalValue.type8 + addedValue);
        }
        else if (dataTypeIndex == 9)
        {
            decimalValue.type9 = isNegative ? (decimalValue.type9 - addedValue) : (decimalValue.type9 + addedValue);
        }
        else if (dataTypeIndex == 10)
        {
            decimalValue.type10 = isNegative ? (decimalValue.type10 - addedValue) : (decimalValue.type10 + addedValue);
        }
        else if (dataTypeIndex == 11)
        {
            decimalValue.type11 = isNegative ? (decimalValue.type11 - addedValue) : (decimalValue.type11 + addedValue);
        }
        else if (dataTypeIndex == 12)
        {
            decimalValue.type12 = isNegative ? (decimalValue.type12 - addedValue) : (decimalValue.type12 + addedValue);
        }
        else if (dataTypeIndex == 13)
        {
            decimalValue.type13 = isNegative ? (decimalValue.type13 - addedValue) : (decimalValue.type13 + addedValue);
        }
        else if (dataTypeIndex == 14)
        {
            decimalValue.type14 = isNegative ? (decimalValue.type14 - addedValue) : (decimalValue.type14 + addedValue);
        }
        else if (dataTypeIndex == 15)
        {
            decimalValue.type15 = isNegative ? (decimalValue.type15 - addedValue) : (decimalValue.type15 + addedValue);
        }
        else if (dataTypeIndex == 16)
        {
            decimalValue.type16 = isNegative ? (decimalValue.type16 - addedValue) : (decimalValue.type16 + addedValue);
        }
        else if (dataTypeIndex == 17)
        {
            decimalValue.type17 = isNegative ? (decimalValue.type17 - addedValue) : (decimalValue.type17 + addedValue);
        }
        else if (dataTypeIndex == 18)
        {
            decimalValue.type18 = isNegative ? (decimalValue.type18 - addedValue) : (decimalValue.type18 + addedValue);
        }
        else if (dataTypeIndex == 19)
        {
            decimalValue.type19 = isNegative ? (decimalValue.type19 - addedValue) : (decimalValue.type19 + addedValue);
        }
        else if (dataTypeIndex == 20)
        {
            decimalValue.type20 = isNegative ? (decimalValue.type20 - addedValue) : (decimalValue.type20 + addedValue);
        }
        else if (dataTypeIndex == 21)
        {
            decimalValue.type21 = isNegative ? (decimalValue.type21 - addedValue) : (decimalValue.type21 + addedValue);
        }
        else if (dataTypeIndex == 22)
        {
            decimalValue.type22 = isNegative ? (decimalValue.type22 - addedValue) : (decimalValue.type22 + addedValue);
        }
        else if (dataTypeIndex == 23)
        {
            decimalValue.type23 = isNegative ? (decimalValue.type23 - addedValue) : (decimalValue.type23 + addedValue);
        }
        else if (dataTypeIndex == 24)
        {
            decimalValue.type24 = isNegative ? (decimalValue.type24 - addedValue) : (decimalValue.type24 + addedValue);
        }
    }

    // int a = varSize[dataTypeIndex];
    // int b = varSize[dataTypeIndex] - invertFrom;
    // int c = varSize[dataTypeIndex] - invertFrom - invertCount;
    int bitesCount = varSize[dataTypeIndex] * 8;
    for (int i = bitesCount - invertFrom - 1; i > bitesCount - invertFrom - invertCount - 1; i--) {
        decimalValue.sys ^= 1UL << i;
    }

    std::stringstream ioStream;

    ioStream.precision(16);

    if (dataTypeIndex == 0)
    {
        ioStream << decimalValue.sys << ':' << decimalValue.type0;
    }
    else if (dataTypeIndex == 1)
    {
        ioStream << decimalValue.sys << ':' << decimalValue.type1;
    }
    else if (dataTypeIndex == 2)
    {
        ioStream << decimalValue.type2;
    }
    else if (dataTypeIndex == 3)
    {
        ioStream << decimalValue.type3;
    }
    else if (dataTypeIndex == 4)
    {
        ioStream << decimalValue.type4;
    }
    else if (dataTypeIndex == 5)
    {
        ioStream << decimalValue.type5;
    }
    else if (dataTypeIndex == 6)
    {
        ioStream << decimalValue.type6;
    }
    else if (dataTypeIndex == 7)
    {
        ioStream << decimalValue.type7;
    }
    else if (dataTypeIndex == 8)
    {
        ioStream << decimalValue.type8;
    }
    else if (dataTypeIndex == 9)
    {
        ioStream << decimalValue.type9;
    }
    else if (dataTypeIndex == 10)
    {
        ioStream << decimalValue.type10;
    }
    else if (dataTypeIndex == 11)
    {
        ioStream << decimalValue.type11;
    }
    else if (dataTypeIndex == 12)
    {
        ioStream << decimalValue.type12;
    }
    else if (dataTypeIndex == 13)
    {
        ioStream << decimalValue.type13;
    }
    else if (dataTypeIndex == 14)
    {
        ioStream << decimalValue.type14;
    }
    else if (dataTypeIndex == 15)
    {
        ioStream << decimalValue.type15;
    }
    else if (dataTypeIndex == 16)
    {
        ioStream << decimalValue.type16;
    }
    else if (dataTypeIndex == 17)
    {
        ioStream << decimalValue.type17;
    }
    else if (dataTypeIndex == 18)
    {
        ioStream << decimalValue.type18;
    }
    else if (dataTypeIndex == 19)
    {
        ioStream << decimalValue.type19;
    }
    else if (dataTypeIndex == 20)
    {
        ioStream << decimalValue.type20;
    }
    else if (dataTypeIndex == 21)
    {
        ioStream << decimalValue.type21;
    }
    else if (dataTypeIndex == 22)
    {
        ioStream << decimalValue.type22;
    }
    else if (dataTypeIndex == 23)
    {
        ioStream << decimalValue.type23;
    }
    else if (dataTypeIndex == 24)
    {
        ioStream << decimalValue.type24;
    }

    ioStream >> decimalDest;

    int binaryLength = varSize[dataTypeIndex] * CHAR_BIT;
    *(binaryDest + binaryLength + 1) = '\0';
    for (int i = 0; i < binaryLength; i++)
    {
        *(binaryDest + binaryLength - i - 1) = ((decimalValue.sys >> i) & 0x1) == 1 ? '1' : '0';
    }
}
