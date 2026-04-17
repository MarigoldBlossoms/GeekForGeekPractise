#include <gtest/gtest.h>
#include "../_src/transpose.h"
#include <vector>

TEST(TransposeTests, GeneralTest)
{
    int testValues[3][M] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    vector<vector<int>> output = transpose(testValues, 3);

    vector<vector<int>> expected = {
        {1, 6, 11},
        {2, 7, 12},
        {3, 8, 13},
        {4, 9, 14},
        {5, 10, 15}
    };

    for (int i = 0; i < M; i++)
    {
        ASSERT_EQ(output[i], expected[i]);
    }
}