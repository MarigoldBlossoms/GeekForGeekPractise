#include "transpose.h"


vector<vector<int>> transpose(int a[][M], int n) 
{
    vector<vector<int>> transposed;


    for (int i = 0; i < M; i++)
    {
        vector<int> v;

        for (int j = 0; j < n; j++)
        {
            v.push_back(a[j][i]);
        }
        transposed.push_back(v);
    }

    return transposed;
}
