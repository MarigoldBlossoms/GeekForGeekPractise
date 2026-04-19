#include "nsum.h"

int addNum(int n)
{
    if (n == 0) return 0;

    return n + addNum(n - 1);
}

int nSum(int n) {
    return addNum(n);
}