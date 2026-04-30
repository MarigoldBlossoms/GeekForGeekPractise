#include "sortarray.h"

void sortArray(int a[], char b[], int n) {
    unordered_map<int, char> pairContainer;

    for (int i = 0; i < n; i++)
    {
        pairContainer[a[i]] = b[i];
    }


    for (int i = 0; i < n; i++)
    {
        b[i] = pairContainer[i + 1];
    }

    return;
}
