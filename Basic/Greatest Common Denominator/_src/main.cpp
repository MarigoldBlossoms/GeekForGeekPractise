#include <iostream>
using namespace std;

int main() {
    //Euclidean Algorithm
    int n1, n2;
    cin >> n1 >> n2;
    
    if (n1 < n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    while (n2 != 0)
    {
        int remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    
    cout << n1 << "\n";

    return 0;
}