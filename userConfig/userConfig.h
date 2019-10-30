#ifndef USR_CONFIG

#define USR_CONFIG

bool isNegativeMap[] = {
    true,  // char
    true,  // signed char
    true,  // short
    true,  // short int
    true,  // signed short
    true,  // signed short int
    false, // unsigned short
    false, // unsigned short int
    true,  // int
    true,  // signed int
    false, // unsigned int
    true,  // long
    true,  // long int
    true,  // signed long
    true,  // signed long intp
    false, // unsigned long
    false, // unsigned long int
    true,  // long long
    true,  // long long int
    true,  // signed long long
    true,  // signed long long int
    false, // unsigned long long
    false, // unsigned long long int
    true,  // float
    true,  // double
};

bool isFloatMap[] = {
    false, // char
    false, // signed char
    false, // short
    false, // short int
    false, // signed short
    false, // signed short int
    false, // unsigned short
    false, // unsigned short int
    false, // int
    false, // signed int
    false, // unsigned int
    false, // long
    false, // long int
    false, // signed long
    false, // signed long int
    false, // unsigned long
    false, // unsigned long int
    false, // long long
    false, // long long int
    false, // signed long long
    false, // signed long long int
    false, // unsigned long long
    false, // unsigned long long int
    true,  // float
    true,  // double
};

unsigned long long int maxPositiveValueMap[] = {
    255,                  // char
    127,                  // signed char
    32767,                // short
    32767,                // short int
    32767,                // signed short
    32767,                // signed short int
    65535,                // unsigned short
    65535,                // unsigned short int
    2147483647,           // int
    2147483647,           // signed int
    4294967295,           // unsigned int
    2147483647,           // long
    2147483647,           // long int
    2147483647,           // signed long
    2147483647,           // signed long int
    4294967295,           // unsigned long
    4294967295,           // unsigned long int
    9223372036854775807,  // long long
    9223372036854775807,  // long long int
    9223372036854775807,  // signed long long
    9223372036854775807,  // signed long long int
    18446744073709551615, // unsigned long long
    18446744073709551615, // unsigned long long int
    2147483647,           // float
    4294967295,           // double
};

short dataTypeIndex = 0;

unsigned long long int maxDecimalValue = 18446744073709351615;
bool mayBeNegative = true;
bool mayBeFloat = true;

short base = 25;
char input[10000] = {'\0'};
bool isNegative = false;

#endif