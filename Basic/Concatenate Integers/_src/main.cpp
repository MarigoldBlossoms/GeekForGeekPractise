#include <iostream>
using namespace std;

string concatInt(int a, int b)
{
    return (to_string(a) + to_string(b));
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << concatInt(a, b);

    return 0;
}