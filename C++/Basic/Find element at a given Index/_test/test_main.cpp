#include <gtest/gtest.h>
#include <vector>
#include "../_src/findelement.h"

TEST(GetElementTest, GetElements)
{
  vector<int> testV = {10,20, 30, 40, 50};

  for (int i = 0; i < testV.size(); i++)
  {
    ASSERT_EQ(findElementAtIndex(i, testV), testV[i]);
  }
}