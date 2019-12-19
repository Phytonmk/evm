#include <cstdlib>
#include "userConfig/userConfig.h"
#include "getch/getch.h"
#include "cursor/cursor.h"
#include "rangeInput/rangeInput.h"
#include "showAnimatedLabel/showAnimatedLabel.h"
#include "coloredOutput/coloredOutput.h"
#include "changeRadix/changeRadix.h"
#include "chart/chart.h"
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
        char label0[] = {'S', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'a', 't', 'a', ' ', 't', 'y', 'p', 'e', ':', '\0'};
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
        std::cout << "Use arrow keys (↑/↓) to choose data type and Enter to confirm choice";
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
        if (inputKey == '\n')
        {
            step = 1;
            return;
        }
    }
}

void render()
{
    std::system("clear");

    char decimal[10000] = {'\0'};
    char binary[10000] = {'\0'};
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
        // if (isInputValid)
        // {
        //     moveCursor(15, 2);
        //     putchar('-');
        // moveCursor(16, 3);
        // putchar('1');
        // }
    }
    // char label4[] = {'A', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', ' ', 's', 'y', 'm', 'b', 'o', 'l', 's', ':', '\0'};
    // printLabel(label4, 0, 5);
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

    moveCursor(0, 24);
    std::cout << "Use upper arrow key (↑) to setup bites inversion.";
    moveCursor(0, 25);
    std::cout << "Use lower arrow key (↓) to toggle decimal output animation. Animation ";
    if (animationEnabled)
    {
        std::cout << "ENABLED";
    }
    else
    {
        std::cout << "DISABLED";
    }

    moveCursor(0, 27);
    std::cout << "Use Tab to open previous (base input) screen";
    moveCursor(0, 28);
    std::cout << "Use Enter to restart/exit program";
    moveCursor(0, 10);
    std::cout << "Inverting bites from position: ";
    std::cout << invertFrom;
    moveCursor(0, 11);
    std::cout << "Inverting bites count: ";
    std::cout << invertCount;

    if (isInputValid)
    {
        char label2[] = {'D', 'e', 'c', 'i', 'm', 'a', 'l', ':', ' ', '\0'};
        printLabel(label2, 0, 2);
        char label3[] = {'B', 'i', 'n', 'a', 'r', 'y', ':', ' ', '\0'};
        printLabel(label3, 0, 3);

        int binaryLength;
        while (binary[binaryLength] != '\0')
            binaryLength++;
        coloredOutput(binary, 16, 3, 0, binaryLength);

        drawChart(binary, 0, 15, chartScaling);

        if (animationEnabled)
        {
            showAnimatedLabel(decimal, 16, 2);
        }
        else
        {
            printLabel(decimal, 16, 2);
        }
    }

    moveCursor(16 + inputLength, 1);
}

void getBase()
{
    while (true)
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
        }
        else if (step == 1)
        {
            getBase();
            inputLength = 0;
            input[0] = '\0';
            isNegative = false;
            floatDelimeter = -1;
            isInputValid = false;
        }
        else if (step == 2)
        {
            render();
            inputSymbol = getch();
            if (inputSymbol == '\t')
            {
                std::system("clear");
                step = 1;
                continue;
            }
            else if (inputSymbol == '\n')
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
            else if (inputSymbol == 91)
            {
                int arrowKey = getch();
                if (arrowKey == 67 && chartScaling < 200)
                {
                    chartScaling++;
                }
                else if (arrowKey == 68 && chartScaling > 10)
                {
                    chartScaling--;
                }
                else if (arrowKey == 66)
                {
                    animationEnabled = !animationEnabled;
                }
                else if (arrowKey == 65)
                {
                    step = 3;
                    continue;
                }
            }
            else
            {
                // std::cout << "\a";
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
        else if (step == 3)
        {
            moveCursor(70, 5);
            std::cout << "╔═══════════════════════════════════════════════════════════╗";
            moveCursor(70, 6);
            std::cout << "║            Bytes inversion setup                          ║";
            moveCursor(70, 7);
            std::cout << "║                                                           ║";
            moveCursor(70, 8);
            std::cout << "║    Invert bites from position                             ║";
            moveCursor(70, 9);
            std::cout << "║      >                                                    ║";
            moveCursor(70, 10);
            std::cout << "║    How many bites to invert                               ║";
            moveCursor(70, 11);
            std::cout << "║      >                                                    ║";
            moveCursor(70, 12);
            std::cout << "╚═══════════════════════════════════════════════════════════╝";

            invertFrom = rangeInput(79, 9, 0, varSize[dataTypeIndex] * 8, true);
            if (invertFrom == -1)
            {
                step = 1;
                continue;
            }
            invertCount = rangeInput(79, 11, 0, varSize[dataTypeIndex] * 8 - invertFrom, true);
            if (invertCount == -1)
            {
                step = 1;
                continue;
            }
            for (int i = 5; i < 13; i++)
            {
                moveCursor(70, i);
                std::cout << "                                                             ";
            }
            step = 2;
        }
    }
    return 0;
}
