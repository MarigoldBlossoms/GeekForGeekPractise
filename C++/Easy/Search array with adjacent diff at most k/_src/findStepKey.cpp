#include "findStepKey.h"

int findStepKeyIndex(vector<int>& arr, int k, int x) {
    auto it = find(arr.begin(), arr.end(), x);

    if (it == arr.end()) return -1;
    return distance(arr.begin(), it);
}