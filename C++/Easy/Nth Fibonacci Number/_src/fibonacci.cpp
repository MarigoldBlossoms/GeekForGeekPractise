#include "fibonacci.h"

int nthFibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    return (nthFibonacci(n-1) + nthFibonacci(n - 2));
}

//0, 1, 2, 3, 4, 5
//0, 1, 1, 2, 3, 5
