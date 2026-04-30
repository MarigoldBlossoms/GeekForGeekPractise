#include "sumofsequence.h"

list<int> SplitString(string s)
{
    list<int> newList;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        newList.push_back((s[i] - '0'));
    }

    return newList;
}

int SumOfInts(list<int> ls)
{
    int sum = 0;
    for (int it : ls)
    {
        sum += it;
    }

    return sum;
}

int PowerOf2(int n)
{
    if (n == 0) return 1;
    return 2 * PowerOf2(n - 1);
}

int subsequenceSum(string s) {
    int len = s.length();
    list<int> ls = SplitString(s);
        
    return ((SumOfInts(ls)) * (PowerOf2(len - 1)));
}
