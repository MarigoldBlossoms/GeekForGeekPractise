#include "dayofweek.h"

/* 0 - Sunday
1 - Monday
2 - Tuesday
3 - Wednesday
4 - Thursday
5 - Friday
6 - Saturday */

int nthDay(int d, int n)
{
    int endD = (d - n);

    while (endD < 0)
    {
        endD += 7;
    }

    return (endD % 7);
}