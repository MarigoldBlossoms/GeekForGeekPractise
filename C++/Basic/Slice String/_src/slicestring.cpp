#include "slicestring.h"

string sliceString(string &s) {
    string output;
    for (int i = 1; i < s.size() - 1; i++)
    {
        output += s[i];
    }
    return output;
}