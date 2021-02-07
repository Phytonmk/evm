#include <cstdlib>
#include "userConfig/userConfig.h"
#include "getch/getch.h"
#include "cursor/cursor.h"
#include "rangeInput/rangeInput.h"
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
        std::system("clear");
        char label0[] = { 'S', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'a', 't', 'a', ' ', 't', 'y', 'p', 'e', ':', '\0'};
        printLabel(label0, 0, 0);
        char label1[] = {'1', ':', ' ', 'c', 'h', 'a', 'r', '\0'};
        printLabel(label1, 2, 2);
        char label2[] = {'2', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'c', 'h', 'a', 'r', '\0'};
        printLabel(label2, 2, 3);
        char label3[] = {'3', ':', ' ', 's', 'h', 'o', 'r', 't', '\0'};
        printLabel(label3, 2, 4);
        char label4[] = {'4', ':', ' ', 's', 'h', 'o', 'r', 't', ' ', 'i', 'n', 't', '\0'};
        printLabel(label4, 2, 5);
        char label5[] = {'5', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', '\0'};
        printLabel(label5, 2, 6);
        char label6[] = {'6', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', ' ', 'i', 'n', 't', '\0'};
        printLabel(label6, 2, 7);
        char label7[] = {'7', ':', ' ', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', '\0'};
        printLabel(label7, 2, 8);
        char label8[] = {'8', ':', ' ', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 's', 'h', 'o', 'r', 't', ' ', 'i', 'n', 't', '\0'};
        printLabel(label8, 2, 9);
        char label9[] = {'9', ':', ' ', 'i', 'n', 't', '\0'};
        printLabel(label9, 2, 10);
        char label10[] = {'1', '0', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'i', 'n', 't', '\0'};
        printLabel(label10, 2, 11);
        char label11[] = {'1', '1', ':', ' ', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'i', 'n', 't', '\0'};
        printLabel(label11, 2, 12);
        char label12[] = {'1', '2', ':', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label12, 2, 13);
        char label13[] = {'1', '3', ':', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label13, 2, 14);
        char label14[] = {'1', '4', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label14, 20, 2);
        char label15[] = {'1', '5', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label15, 20, 3);
        char label16[] = {'1', '6', ':', ' ', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label16, 20, 4);
        char label17[] = {'1', '7', ':', ' ', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label17, 20, 5);
        char label18[] = {'1', '8', ':', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label18, 20, 6);
        char label19[] = {'1', '9', ':', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label19, 20, 7);
        char label20[] = {'2', '0', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label20, 20, 8);
        char label21[] = {'2', '1', ':', ' ', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label21, 20, 9);
        char label22[] = {'2', '2', ':', ' ', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', '\0'};
        printLabel(label22, 20, 10);
        char label23[] = {'2', '3', ':', ' ', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', ' ', 'l', 'o', 'n', 'g', ' ', 'l', 'o', 'n', 'g', ' ', 'i', 'n', 't', '\0'};
        printLabel(label23, 20, 11);
        char label24[] = {'2', '4', ':', ' ', 'f', 'l', 'o', 'a', 't', '\0'};
        printLabel(label24, 20, 12);
        char label25[] = {'2', '5', ':', ' ', 'd', 'o', 'u', 'b', 'l', 'e', '\0'};
        printLabel(label25, 20, 13);

        char label30[] = {'E', 'n', 't', 'e', 'r', ' ', 't', 'h', 'e', ' ', 'd', 'a', 't', 'a', ' ', 't', 'y', 'p', 'e', ':', ' ', '\0'};
        printLabel(label30, 2, 16);

        dataTypeIndex = rangeInput(2, 17, 1, 25, true);

        char emptyString[] = {' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ', ' ', '\0'};
        printLabel(emptyString, 2, 17);

        mayBeNegative = isNegativeMap[dataTypeIndex];
        mayBeFloat = isFloatMap[dataTypeIndex];
        step = 1;
}

char decimal[10000] = {'\0'};
char binary[10000] = {'\0'};

void prompt()
{
    std::system("clear");

    moveCursor(0, 10);

    changeRadix(input, decimal, binary);
    char label1[] = {'I', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ':', ' ', '\0'};
    printLabel(label1, 0, 1);

    for (int i = 0; input[i] != '\0'; i++)
    {
        moveCursor(i + 16, 1);
        putchar(input[i]);
    }
    if (isNegative && inputLength > 0)
    {
        moveCursor(15, 1);
        putchar('-');
    }
    moveCursor(0, 5);
    std::cout << "Available symbols:";
    for (int i = 0; i < base; i++)
    {
        moveCursor((i + 2) * 2, 6);
        if (i < 10)
        {
            putchar(i + '0');
        }
        else
        {
            putchar(i - 10 + 'A');
        }
    }
    if (mayBeNegative)
    {
        moveCursor(2, 6);
        putchar('-');
    }
    if (mayBeFloat)
    {
        moveCursor(0, 6);
        putchar('.');
    }
    moveCursor(0, 7);
    std::cout << "Input number base: " << base << std::flush;
    moveCursor(0, 8);
    std::cout << "Using data type: " << dataTypeNames[dataTypeIndex] << std::flush;

    moveCursor(0, 27);
    std::cout << "Use Tab to open previous (base input) screen";
    moveCursor(0, 28);
    std::cout << "Use Enter to restart/exit program";
    moveCursor(0, 10);


    moveCursor(16 + inputLength, 1);
}

void renderResult() {
    char label2[] = {'D', 'e', 'c', 'i', 'm', 'a', 'l', ':', ' ', '\0'};
    printLabel(label2, 0, 2);
    char label3[] = {'B', 'i', 'n', 'a', 'r', 'y', ':', ' ', '\0'};
    printLabel(label3, 0, 3);

    int binaryLength = 0;
    while (binary[binaryLength] != '\0')
        binaryLength++;

       
    printLabel(binary, 16, 3);

    printLabel(decimal, 16, 2);
}

void getBase()
{
    std::system("clear");
    char label[] = {'I', 'n', 'p', 'u', 't', ' ', 'b', 'a', 's', 'e', ':', ' ', '\0'};
    printLabel(label, 0, 0);
    moveCursor(0, 3);
    std::cout << "Use Tab to open previous screen";
    base = rangeInput(13, 0, 2, 36, false);
    if (base == -1)
    {
        step = 0;
        return;
    }
    step = 2;
    return;
}

int main()
{

    char inputSymbol = '0';
    int floatDelimeter = -1;

    while (input[inputLength] != '\0')
    {
        inputLength++;
    }

    while (true)
    {
        if (step == 0)
        {
            promptDataType();
            std::system("clear");
        }
        else if (step == 1)
        {
            std::system("clear");
            getBase();
            inputLength = 0;
            input[0] = '\0';
            isNegative = false;
            floatDelimeter = -1;
            isInputValid = false;
        }
        else if (step == 2)
        {
            prompt();
            inputSymbol = getch();
            if (inputSymbol == '\t')
            {
                std::system("clear");
                step = 1;
                continue;
            }
            else if (inputSymbol == '\n')
            {
               if (isInputValid) {
                   step = 3;
               }
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
            if (inputLength == floatDelimeter + 1)
            {
                isInputValid = false;
            }
            else
            {
                isInputValid = true;
            }
        } if (step == 3)
        {
            renderResult();
            inputSymbol = getch();
            if (inputSymbol == '\n')
            {
                std::system("clear");
                moveCursor(0, 0);
                std::cout << "Restart/Exit (r/e)? ";
                while (inputSymbol != 'r' && inputSymbol != 'e')
                    inputSymbol = getch();
                if (inputSymbol == 'r')
                {
                    step = 0;
                }
                else
                {
                    std::system("clear");
                    return 0; /*  */
                }
            }
        }
    }
    return 0;
}
