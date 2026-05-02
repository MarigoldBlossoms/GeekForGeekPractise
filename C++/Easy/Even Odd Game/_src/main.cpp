#include <iostream>
using namespace std;

string GetWinner(int n)
{
    switch (n % 2)
    {
        case 0:
            return "Friend";
        default:
            return "You";
    }
}

int main() {
    int n;
    cin >> n;
    
    cout << GetWinner(n) << endl;

    return 0;
}