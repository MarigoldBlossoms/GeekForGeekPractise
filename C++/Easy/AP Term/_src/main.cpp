#include <iostream>
using namespace std;

int arithmeticProgression(int start, int diff, int n)
{
    return (start + (n - 1) * diff);
}

int main() {
    int a, d, n;
    cin >> a >> d >> n;

    printf("%d\n", arithmeticProgression(a, d, n));
    

    return 0;
}
