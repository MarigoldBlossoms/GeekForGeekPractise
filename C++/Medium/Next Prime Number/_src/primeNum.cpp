using namespace std;

bool isPrime(int num)
{
    if (num < 1) return false;
    int divisor = 2;
    while (divisor < num)
    {
        if (num % divisor == 0) return false;
        ++divisor;
    }

    return true;
}


int nextPrime(int n)
{
    int num = n + 1;

    while (true)
    {
        if (isPrime(num)) return num;
        ++num;
    }

    return -1;
}