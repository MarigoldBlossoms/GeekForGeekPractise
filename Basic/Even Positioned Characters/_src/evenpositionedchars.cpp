#include "evenpositionedchars.h"

void utility(string s) {
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0) cout << s[i];
    }
}