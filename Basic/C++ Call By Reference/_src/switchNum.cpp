#include "switchNum.h"

int reverse(string s)
{
    string newS;
    for (int i = 0; i < s.size(); i++)
    {
        newS += s[s.size() - i - 1];
    }
    
    return stoi(newS);
}

void reverse_dig(int &a, int &b) {
    a = reverse(to_string(a));
    b = reverse(to_string(b));
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}