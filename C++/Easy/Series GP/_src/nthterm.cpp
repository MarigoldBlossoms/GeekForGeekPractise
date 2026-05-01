#include "nthterm.h"

int nthTerm(int a, int r, int n)
{
    int total = a;
    int mod = 1000000007;
    for (int i = 1; i < n; i++)
    {
        total = (1ll * total * r) % mod;
    }

    return total;
}