#include "squarewall.h"

void printRow(int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "* ";
    }

    cout << endl;
}

void squareWall(int s)
{
    for (int i = 0; i < s; i++)
    {
        printRow(s);
    }    
}