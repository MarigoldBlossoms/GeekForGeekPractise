#include <iostream>
#include "numberswap.h"

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter 1st number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;

    swap(n1, n2);

    cout << "Number 1 is " << n1 << " Number 2 is " << n2 << "\n";
}
