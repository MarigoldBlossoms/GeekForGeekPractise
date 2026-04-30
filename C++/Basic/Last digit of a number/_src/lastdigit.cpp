#include "lastdigit.h"

int lastDigit(int n) {
    string s = to_string(n);
    return (s[s.size() - 1] - '0');
}