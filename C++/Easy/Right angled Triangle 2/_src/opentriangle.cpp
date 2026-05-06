#include "opentriangle.h"

void printOpenRow(int n)
{
    cout << "* ";
    for (int i = 1; i < n; i++)
    {
        cout << "  ";
    }
    cout << "* " << endl;
}

void printFullRow(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }

    cout << endl;
}

void printPattern(int n) 
{
    cout << "*" << endl;
    if (n <= 1) return;
    for (int i = 1; i < (n - 1); i++)
    {
        printOpenRow(i);
    }

    printFullRow(n);
}