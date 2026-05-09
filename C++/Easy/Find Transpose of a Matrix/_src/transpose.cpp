#include "transpose.h"

void transpose(int N, int mat[][N])
{
    int transposed[N][N];

    for (int rowI = 0; rowI < N; rowI++)
    {
        for (int colI = 0; colI < N; colI++)
        {
            transposed[colI][rowI] = mat[rowI][colI];
        }
    }

    for (int rowI = 0; rowI < N; rowI++)
    {
        for (int colI = 0; colI < N; colI++)
        {
            mat[rowI][colI] = transposed[rowI][colI];
        }
    }
}