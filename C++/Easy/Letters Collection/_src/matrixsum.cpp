#include "matrixsum.h"

int yCoord, xCoord;
int hopDist;

int leftLimit, rightLimit, topLimit, bottomLimit;

int rows, columns;

bool validValue(int y, int x)
{
    return ((y >= 0) && (y < rows) && (x >= 0) && (x < columns));
}

vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
{
    vector<int> outputs;
    rows = n;
    columns = m;

    for (int queryIndex = 0; queryIndex < q; queryIndex++)
    {
        hopDist = queries[queryIndex][0];
        yCoord = queries[queryIndex][1];
        xCoord = queries[queryIndex][2];
        
        leftLimit = xCoord - hopDist;
        rightLimit = xCoord + hopDist;
        topLimit = yCoord - hopDist;
        bottomLimit = yCoord + hopDist;
        
        int sum = 0;
        
        for (int yCoordI = topLimit; yCoordI <= bottomLimit; yCoordI++)
        {
            for (int xCoordI = leftLimit; xCoordI <= rightLimit; xCoordI++)
            {
                if (yCoordI == topLimit || yCoordI == bottomLimit || xCoordI == leftLimit || xCoordI == rightLimit)
                {
                    if (validValue(yCoordI, xCoordI))
                    {
                        sum += mat[yCoordI][xCoordI];
                    }
                }
            }
        }


        outputs.push_back(sum);
    }
    
    return outputs;
}