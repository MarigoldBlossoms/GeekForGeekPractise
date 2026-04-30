#include "minMax.h"

vector<int> getMinMax(vector<int> &arr) {
    vector<int> outputV;
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min) min = arr[i];
        else if (arr[i] > max) max = arr[i];
    }
    
    outputV.push_back(min);
    outputV.push_back(max);
    
    return outputV;
}