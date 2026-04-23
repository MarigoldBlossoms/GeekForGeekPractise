#include "vowelcheck.h"


char isLower(char c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
        return (c + 32);
    }

    return c;
}

string isVowel(char c) {
    switch ((isLower(c)))
    {
        case 'a': return "YES";
        case 'e': return "YES";
        case 'i': return "YES";
        case 'o': return "YES";
        case 'u': return "YES";
        default: return "NO";
    }
}
