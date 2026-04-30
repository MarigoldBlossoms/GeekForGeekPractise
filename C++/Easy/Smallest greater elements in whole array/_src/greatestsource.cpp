#include "greatestsource.h"

int* greaterElement(int arr[], int n) {
    vector<int> tempV;
    unordered_map<int, int> contM;

    //build alt container and sort
    for (int i = 0; i < n; i++)
    {
        tempV.push_back(arr[i]);
    }

    sort(tempV.begin(), tempV.end());

    //build unordered map
    for (int i = 0; i < n - 1; i++)
    {
        contM[tempV[i]] = tempV[i + 1];
    } 

    contM[tempV[n - 1]] = -10000000;

    for (int i = 0; i < n; i++)
    {
        arr[i] = contM[arr[i]];
    }

    return arr;
}
