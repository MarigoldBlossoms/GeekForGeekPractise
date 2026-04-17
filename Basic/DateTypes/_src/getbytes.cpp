#include "getbytes.h"

int BasicDataType(string s) 
{
    if (IsChar(s)) return 1;

    if (IsInt(s)) return 4;

    if (IsFloat(s)) return 4;

    return 8;
}

bool IsChar(string s)
{
    if (s.length() > 1) return false;
    if ((s[0] >= '0') && (s[0] <= '9')) return false;

    return true;
}

bool IsInt(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.') return false;
    }

    return true;
}

bool IsFloat(string s)
{
    int pointIndex = -1;
    
    //Find pointIndex
    int currI = 0;
    while (s[currI] != '.')
    {
        if (s[currI] == '.') break;
        currI++;
    }

    pointIndex = currI;

    if (s.length() - pointIndex >= 7) return false;
    return true;
}