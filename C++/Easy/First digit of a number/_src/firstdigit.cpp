#include "firstdigit.h"

int firstDigit(int n) {
    return stoi(to_string(n).substr(0, 1));  
}