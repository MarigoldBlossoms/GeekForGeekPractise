#include "substring.h"

string substring(string S, int L, int R) {
    return S.substr(L, R - L + 1);
}