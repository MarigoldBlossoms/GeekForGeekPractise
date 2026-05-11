#include "primefactors.h"

bool isPrime(int num)
{
    int divisor = 2;
    while (divisor < num)
    {
        if (num % divisor == 0) return false;
        ++divisor;
    }
    return true;
}

int getMinimumDValidDivisor(int num)
{
    int divisor = 2;
    while ((num % divisor != 0) || (!isPrime(divisor)))
    {
        ++divisor;
    }

    return divisor;
}


void printPrimeFactorization(int n)
{
    int remainingNum = n;
    vector<int> divisors;
    
    while (remainingNum > 1)
    {
        int divisor = getMinimumDValidDivisor(remainingNum);
        
        remainingNum /= divisor;
        divisors.push_back(divisor); 
    }
    
    sort(divisors.begin(), divisors.end());
    
    for (int d : divisors)
    {
        cout << d << " ";
    }
}