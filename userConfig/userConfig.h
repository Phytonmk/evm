#ifndef USR_CONFIG

#define USR_CONFIG

#include <string>

bool isNegativeMap[] = {
    false, // char
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
    true,  // signed long int
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

std::string dataTypeNames[] = {
    "char",
    "signed char",
    "short",
    "short int",
    "signed short",
    "signed short int",
    "unsigned short",
    "unsigned short int",
    "int",
    "signed int",
    "unsigned int",
    "long",
    "long int",
    "signed long",
    "signed long int",
    "unsigned long",
    "unsigned long int",
    "long long",
    "long long int",
    "signed long long",
    "signed long long int",
    "unsigned long long",
    "unsigned long long int",
    "float",
    "double",
};

short varSize[] = {
    sizeof(char),
    sizeof(signed char),
    sizeof(short),
    sizeof(short int),
    sizeof(signed short),
    sizeof(signed short int),
    sizeof(unsigned short),
    sizeof(unsigned short int),
    sizeof(int),
    sizeof(signed int),
    sizeof(unsigned int),
    sizeof(long),
    sizeof(long int),
    sizeof(signed long),
    sizeof(signed long int),
    sizeof(unsigned long),
    sizeof(unsigned long int),
    sizeof(long long),
    sizeof(long long int),
    sizeof(signed long long),
    sizeof(signed long long int),
    sizeof(unsigned long long),
    sizeof(unsigned long long int),
    sizeof(float),
    sizeof(double),
};

short dataTypeIndex = 0;

bool mayBeNegative = true;
bool mayBeFloat = true;

short base = 10;
char input[10000] = {'\0'};
bool isNegative = false;

int inputLength = 0;
int step = 0;
bool isInputValid = false;

int chartScaling = 20;
bool animationEnabled = false;
int invertFrom = 0;
int invertCount = 0;

#endif