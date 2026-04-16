#include <iostream>
#include <vector>
#include "findelement.h"

using namespace std;

int main()
{
    vector<int> testV = {10,20, 30, 40, 50};

    for (int i = 0; i < testV.size(); i++)
    {
        cout << "Element " << i << " is " << findElementAtIndex(i, testV) << "\n";
    }
}