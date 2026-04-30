#include "set.h"

int add(int A, int B)
{
    return (A + B);
}
int subtract(int A, int B)
{
    if (A > B) return A - B;
    return B - A;
}
int product(int A, int B)
{
    return A * B;
}
int divide(int A, int B)
{
    if (A > B) return A / B;
    return B / A;
}

vector<int> cppOperators(int A, int B) {
    vector<int> output;
    
    output.push_back(add(A, B));
    output.push_back(product(A, B));
    output.push_back(subtract(A, B));
    output.push_back(divide(A, B));

    return output;
}