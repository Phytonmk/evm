#ifndef USR_CONFIG

#define USR_CONFIG

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

short dataTypeIndex = 5;

bool mayBeNegative = true;
bool mayBeFloat = true;

short base = 10;
int inputLength = 0;
char input[10000] = {'1', '2', '3', '\0'};
bool isNegative = false;
int step = 2;
bool isInputValid = true;
int chartScaling = 20;

bool animationEnabled = false;
int invertFrom = 3;
int invertCount = 5;

#endif