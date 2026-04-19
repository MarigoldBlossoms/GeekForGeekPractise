#include <iostream>
using namespace std;

int IsAGreaterThanB(int a, int b)
{
    if (a > b) return 1;
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << IsAGreaterThanB(a, b);   

    return 0;
}