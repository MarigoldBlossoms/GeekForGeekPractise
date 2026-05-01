#include "extraChar.h"

char extraChar(string &s1, string &s2) {
    sort(s1.begin(), s1.end());
    sort (s2.begin(), s2.end());

    for (int i = 0; i < s1.size(); i++)
    {
        s2.erase(s2.find(s1[i]), 1);
    }

    return s2[0];
}