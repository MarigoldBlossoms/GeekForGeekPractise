#include "getmaxvalue.h"

int getMaxVal(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    int index = 0;
    int totalValue = 0;
    while ((index < arr.size()) && (index < k))
    {
        totalValue += arr[index];
        ++index;
    }

    return totalValue;
}