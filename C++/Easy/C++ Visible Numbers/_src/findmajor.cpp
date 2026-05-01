#include "findmajor.h"


vector<int> findMajor(vector<int>& nums)
{

    map<int, int> numMap;
    queue<int> numQ;

    for (int i = 0; i < nums.size(); i++)
    {
        if (numMap.find(nums[i]) == numMap.end())
        {
            numMap[nums[i]] = 1;
            numQ.push(nums[i]);
        }
        else
        {
            numMap[nums[i]]++;
        }
    }

    vector<int> outputV;
    int threshold = nums.size() / 3;

    while (!numQ.empty())
    {
        int key = numQ.front();
        numQ.pop();
        if (numMap[key] > threshold)
        {
            outputV.push_back(key);
        }
    }

    if (outputV.empty())
    {
        outputV.push_back(-1);
    }

    return outputV;
}