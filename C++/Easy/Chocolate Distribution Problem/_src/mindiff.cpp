#include "mindiff.h"

int minDiff(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());

    int minDiff = arr[k - 1] - arr[0];

    for (int i = 1; i <= (arr.size() - k); i++)
    {
        int diff = arr[i + k - 1] - arr[i];
        if (minDiff > diff)
        {
            minDiff = diff;
        }
    }

    return minDiff; 
}