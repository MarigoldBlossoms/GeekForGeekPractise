#include <iostream>
using namespace std;

void PrintFullLine(int width)
{
    for (int i = 0; i < width; i++)
    {
        cout << "* ";
    }
    cout << "\n";
}

void PrintGapLines(int width)
{
    int i = 0;
    cout << "* ";
    while (i < (width - 2)) 
    {
        cout << "  ";
        i++;
    }
    cout << "* \n";
}

int main() {
    int width;
    cin >> width;
    
    PrintFullLine(width);
    if (width > 2)
    {
        for (int i = 1; i < width - 1; i++)
        {
            PrintGapLines(width);
        }
    }
    PrintFullLine(width);

    return 0;
}