#include "printtriangle.h"

void PrintLine(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
}

void printPattern(int n) {
    for (int i = 0; i < n; i++)
    {
        PrintLine(n - i);
    }
}