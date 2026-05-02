#include "rightangledtriangle.h"

void triangleRow(int s)
{
    for (int i = 0; i <= s; i++)
    {
        cout << "* ";
    }
}

void triangleWall(int s) {
    for (int i = 0; i < s; i++)
    {
        triangleRow(i);
        cout << endl;
    } 
}