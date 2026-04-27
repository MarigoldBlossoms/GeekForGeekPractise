#include "binary.h"

int PowerOf2(int n)
{
    if (n == 0) return 1;
    return 2 * PowerOf2(n - 1);
}

int binaryToDecimal(string &b) {
    int sum = 0;
    reverse(b.begin(), b.end());
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '1')
            sum += PowerOf2(i);
    }
        
    
    return sum;
}