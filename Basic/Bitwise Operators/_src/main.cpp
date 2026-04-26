#include <iostream>
using namespace std;

int XOR(int a, int b)
{
    return (a ^ b);
}

int AND(int a, int b)
{
    return (a & b);
}

int OR(int a, int b)
{
    return (a | b);
}

int NOT(int a)
{
    return (~a);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << XOR(a, a) << " ";
    cout << NOT(XOR(c, b)) << " ";
    cout << AND(a, b) << " ";
    cout << OR(c, XOR(a, a)) << " ";

    return 0;
}