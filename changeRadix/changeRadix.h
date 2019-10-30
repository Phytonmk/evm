#ifndef CHANGE_RADIX

#define CHANGE_RADIX

int getValueLength(int value, int base);
void extractMantissa(char src[], char dist[], int *mantissa);
unsigned long long convToDecNum(char src[], int base, bool isInteger = true);
void toDecimal(char src[], char *dest, int base);
void toBinary(char src[], char *dest, int base);

#include "changeRadix.c"

#endif