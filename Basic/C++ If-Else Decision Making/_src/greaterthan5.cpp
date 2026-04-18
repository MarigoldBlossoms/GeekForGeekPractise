#include "greaterthan5.h"

string compareFive(int n) {
    int const threshold = 5;
    
    if (n == 5) return "Equal to 5";
    if (n > 5) return "Greater than 5";
    return "Less than 5";
}