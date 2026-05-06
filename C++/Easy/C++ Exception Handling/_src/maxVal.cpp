#include "maxVal.h"


int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int maxValue(int a, int b) {
    int maxVal;

    maxVal = max(maxVal, add(a, b));
    maxVal = max(maxVal, subtract(a, b));
    maxVal = max(maxVal, product(a, b));
    
    try
    {
        if (b == 0) throw b;
        maxVal = max(maxVal, divide(a, b));
    }
    catch(int e)
    {
        return -999999;
    }

    return maxVal;
}