#include "multiplicationtable.h"

vector<int> getTable(int n) {
    int rounds = 10;
    vector<int> outputVector;

    for (int i = 0; i < rounds; i++)
    {
        outputVector.push_back((i + 1) * n);
    }
    
    return outputVector;
}