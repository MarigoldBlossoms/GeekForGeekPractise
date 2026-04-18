#include <iostream>
using namespace std;

int main() {
    string inputS;
    int n = 0;
    
    //Get input
    getline(cin, inputS);
    
    //Convert string to int
    n = stoi(inputS);
    
    //Output 
    cout << (n+10) << "\n";
    return 0;
}
