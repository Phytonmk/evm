#include <cstdlib>
#include "userConfig/userConfig.h"
#include "getch/getch.h"
#include "cursor/cursor.h"
#include "changeRadix/changeRadix.h"
#include <iostream>

void printLabel(char label[], int x, int y)
{
    for (int i = 0; label[i] != '\0'; i++)
    {
        moveCursor(i + x, y);
        putchar(label[i]);
    }
}

int maxDataType = 24;
void promptDataType()
{
    while (true)
    {
        std::system("clear");
        char emptyString[] = {' ', '\0'};
        for (int x = 0; x < 50; x++)
        {
            for (int y = 0; y < 50; y++)
            {
                printLabel(emptyString, x, y);
            }
        }
        char label0[] = {'S', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'a', 't', 'a', ' ', 't', 'y', 'p', 'e', ':'};
        printLabel(label0, 0, 0);
        char label1[] = {'c', 'h', 'a', 'r', '\0'};
        printLabel(label1, 2, 2);
        char label2[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 'c', 'h', 'a', 'r', '\0'};
        printLabel(label2, 2, 3);
        char label4[] = {'s', 'h', 'o', 'r', 't', '\0'};
        printLabel(label4, 2, 4);
        char label5[] = {'s', 'h', 'o', 'r', 't', ' ', 'i', 'n', 't', '\0'};
        printLabel(label5, 2, 5);
        char label6[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', '\0'};
        printLabel(label6, 2, 6);
        char label7[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', ' ', 'i', 'n', 't', '\0'};
        printLabel(label7, 2, 7);
        char label8[] = {'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', '\0'};
        printLabel(label8, 2, 8);
        char label9[] = {'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', ' ', 'i', 'n', 't', '\0'};
        printLabel(label9, 2, 9);
        char label10[] = {'i', 'n', 't', '\0'};
        printLabel(label10, 2, 10);
        char label12[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 'i', 'n', 't', '\0'};
        printLabel(label12, 2, 11);
        char label14[] = {'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'i', 'n', 't', '\0'};
        printLabel(label14, 2, 12);
        char label15[] = {'l', 'o', 'n', 'g', '\0'};
        printLabel(label15, 2, 13);
        char label16[] = {'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label16, 2, 14);
        char label17[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label17, 2, 15);
        char label18[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label18, 2, 16);
        char label19[] = {'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label19, 2, 17);
        char label20[] = {'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label20, 2, 18);
        char label21[] = {'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label21, 2, 19);
        char label22[] = {'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label22, 2, 20);
        char label23[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label23, 2, 21);
        char label24[] = {'s', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label24, 2, 22);
        char label25[] = {'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label25, 2, 23);
        char label26[] = {'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label26, 2, 24);
        char label27[] = {'f', 'l', 'o', 'a', 't', '\0'};
        printLabel(label27, 2, 25);
        char label28[] = {'d', 'o', 'u', 'b', 'l', 'e', '\0'};
        printLabel(label28, 2, 26);
        char label30[] = {'>', '\0'};
        printLabel(label30, 0, dataTypeIndex + 2);
        moveCursor(0, 28);
        int inputKey = getch();
        if (inputKey == 91)
        {
            int arrowKey = getch();
            if (arrowKey == 66)
            {
                dataTypeIndex++;
                if (dataTypeIndex > maxDataType)
                {
                    dataTypeIndex = 0;
                }
            }
            else if (arrowKey == 65)
            {
                dataTypeIndex--;
                if (dataTypeIndex < 0)
                {
                    dataTypeIndex = maxDataType;
                }
            }
        }
        mayBeNegative = isNegativeMap[dataTypeIndex];
        mayBeFloat = isFloatMap[dataTypeIndex];
        maxDecimalValue = maxPositiveValueMap[dataTypeIndex];
        if (inputKey == '\n')
        {
            return;
        }
    }
}

bool isInputValid = true;
void render()
{
    std::system("clear");

    char decimal[10000] = {'\0'};
    char binary[10000] = {'\0'};
    toDecimal(input, decimal, base);
    toBinary(input, binary, base);
    char label1[] = {'I', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ':', ' ', '\0'};
    printLabel(label1, 0, 1);
    int intputLength = 0;
    while (input[intputLength] != '\0')
        intputLength++;
    int decimalLength = 0;
    while (decimal[decimalLength] != '\0')
        decimalLength++;
    int binaryLength = 0;
    while (binary[binaryLength] != '\0')
        binaryLength++;
    char clearedInput[10000] = {'\0'};
    int mantissa = 0;
    extractMantissa(input, clearedInput, &mantissa);
    unsigned long long decimalInputValue = convToDecNum(clearedInput, base);
    int maxInputLength = getValueLength(maxDecimalValue, base);
    int maxDecimalLength = getValueLength(maxDecimalValue, 10);
    int maxBinaryLength = getValueLength(maxDecimalValue, 2);
    if (mantissa > 0)
    {
        maxInputLength++;
        maxDecimalLength++;
        maxBinaryLength++;
    }
    int maxLength = maxInputLength;
    if (maxDecimalLength > maxLength)
        maxLength = maxDecimalLength;
    if (maxBinaryLength > maxLength)
        maxLength = maxBinaryLength;
    for (int i = 0; i < maxInputLength; i++)
    {
        moveCursor(maxLength - maxInputLength + i + 16, 1);
        if (i >= maxInputLength - intputLength)
            putchar(input[i - (maxInputLength - intputLength)]);
        else
            putchar('0');
    }
    if (isInputValid)
    {
        char label2[] = {'D', 'e', 'c', 'i', 'm', 'a', 'l', ':', ' ', '\0'};
        printLabel(label2, 0, 2);

        for (int i = 0; i < maxDecimalLength; i++)
        {
            moveCursor(maxLength - maxDecimalLength + i + 16, 2);
            if (i >= maxDecimalLength - decimalLength)
                putchar(decimal[i - (maxDecimalLength - decimalLength)]);
            else
                putchar('0');
        }
        char label3[] = {'B', 'i', 'n', 'a', 'r', 'y', ':', ' ', '\0'};
        printLabel(label3, 0, 3);
        for (int i = 0; i < maxBinaryLength; i++)
        {
            moveCursor(maxLength - maxBinaryLength + i + 16, 3);
            if (i >= maxBinaryLength - binaryLength)
                putchar(binary[i - (maxBinaryLength - binaryLength)]);
            else
                putchar('0');
        }
    }
    if (isNegative)
    {
        moveCursor(maxLength - maxInputLength + 15, 1);
        putchar('-');

        if (isInputValid)
        {
            moveCursor(maxLength - maxDecimalLength + 15, 2);
            putchar('-');
            moveCursor(maxLength - maxBinaryLength + 15, 3);
            putchar('-');
        }
    }
    moveCursor(maxLength + 16, 1);
}

void getBase()
{
    std::system("clear");
    char label[] = {'I', 'n', 'p', 'u', 't', ' ', 'b', 'a', 's', 'e', ':', ' ', '\0'};
    printLabel(label, 0, 0);
    int c = '\0';
    int secondChar = '\0';
    int firstChar = '\0';
    moveCursor(13, 0);
    while (!(firstChar >= '0' && firstChar <= '3'))
        firstChar = getch();
    putchar(firstChar);
    moveCursor(14, 0);
    while (!(secondChar >= '0' && ((firstChar == '3' && secondChar <= '6') || (firstChar != '3' && secondChar <= '9'))))
        secondChar = getch();
    if (secondChar == '\n')
    {
        return;
    }
    putchar(secondChar);
    base = (firstChar - '0') * 10 + (secondChar - '0');
    while (getch() != '\n')
        ;
}

int main()
{
    // double foo;
    // std::cout << sizeof(foo) << '\n';
    // std::cin >> foo;
    // std::cout << foo << '\n';
    // return 0;
    promptDataType();
    getBase();
    char inputSymbol = '0';
    int inputLength = 0;
    int floatDelimeter = -1;
    while (true)
    {
        render();
        inputSymbol = getch();
        if (inputSymbol == '\n')
        {
            moveCursor(0, 4);
            break;
        }
        else if (inputSymbol == 127)
        {
            if (inputLength > 0)
            {
                inputLength--;
            }
            if (floatDelimeter >= inputLength)
            {
                floatDelimeter = -1;
            }
            input[inputLength] = '\0';
        }
        else if (mayBeNegative && inputSymbol == '-')
        {
            isNegative = !isNegative;
        }
        else if ((inputSymbol >= '0' && (inputSymbol - '0' < base)) || (inputSymbol >= 'a' && inputSymbol - 'a' < base - 10))
        {
            input[inputLength] = inputSymbol;
            input[inputLength + 1] = '\0';
            inputLength++;
        }
        else if (mayBeFloat && (inputSymbol == '.' || inputSymbol == ',') && ((inputLength > 0 && input[0] != '-') || inputLength > 1) && floatDelimeter == -1)
        {
            floatDelimeter = inputLength;
            input[inputLength] = '.';
            input[inputLength + 1] = '\0';
            inputLength++;
        }
        char clearedInput[10000] = {'\0'};
        int mantissa = 0;
        extractMantissa(input, clearedInput, &mantissa);
        unsigned long long decimalInputValue = convToDecNum(clearedInput, base);
        if (decimalInputValue > maxDecimalValue && inputLength > 0)
        {
            inputLength--;
            input[inputLength] = '\0';
        }
        if (inputLength == floatDelimeter + 1)
        {
            isInputValid = false;
        }
        else
        {
            isInputValid = true;
        }
    }
    return 0;
}
