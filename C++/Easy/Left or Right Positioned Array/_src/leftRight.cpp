#include "leftRight.h"

bool leftRight(vector<int>& arr) {
    int sizeOfArr = arr.size();
    int index = 0;

    while (!arr.empty())
    {
        auto itL = find(arr.begin(), arr.end(), index);
        auto itR = find(arr.begin(), arr.end(), (sizeOfArr - index - 1)); 
        
        if (itL != arr.end())
        {
            arr.erase(itL);            
        }
        else if (itR != arr.end())
        {
            arr.erase(itR);
        }
        else
        {
            return false;
        }
        
        ++index;
    }

    return true;
}