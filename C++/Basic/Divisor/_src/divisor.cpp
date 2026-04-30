#include "divisor.h"

void printDivisors(int n) {
    int div = 1;
    
    while (div <= n)
    {
        if (n % div == 0) cout << div << " ";
        div++;
    }
}