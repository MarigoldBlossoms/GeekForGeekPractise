#include "reversestring.h"

string reverseString(string &s) {
    string newS;
    
    for (int i = 0; i < s.length(); i++)
    {
        newS += s[s.length() - 1 - i];
    }

    return newS;
}