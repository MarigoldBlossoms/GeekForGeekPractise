#include "delElement.h"

vector<int> deleteElement(vector<int>& arr, int k) 
{
    stack<int> tempS;
    int delCount = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        while (!tempS.empty() && (tempS.top() < arr[i]) && (delCount < k))
        {
            tempS.pop();
            ++delCount;
        }

        tempS.push(arr[i]);
    }

    vector<int> outputV;

    while (!tempS.empty())
    {
        outputV.push_back(tempS.top());
        tempS.pop();
    }

    reverse(outputV.begin(), outputV.end());
    
    return outputV;
}