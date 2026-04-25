#include <iostream>
#include <string>
using namespace std;

int ConvToInt(string input)
{
    try
    {
        int num = stoi(input);
        return num;
    }
    catch(const std::exception& e)
    {
        return -1;
    }
}

int DoubleVal(int num)
{
    return num * 2;
}

int main() {
    string input;
    getline(cin, input);
    int num = ConvToInt(input);
    num = DoubleVal(num);

    cout << num;

    return 0;
}
