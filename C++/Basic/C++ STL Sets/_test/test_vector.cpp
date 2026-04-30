#include <gtest/gtest.h>

#include "../_src/stl.h"

TEST(VectorTests, SizeOfVector)
{
  vector<int> testV = {1, 2, 3, 4, 5};

  ASSERT_EQ(size_of_vector(testV), testV.size());
}

TEST(VectorTests, AddToVector)
{
  vector<int> testV = {1, 2, 3, 4, 5};

  add_to_vector(testV, 6);

  for (int i = 0; i < testV.size(); i++)
  {
    ASSERT_EQ(testV[i], (i+1));  
  }

  
  ASSERT_EQ(testV.size(), 6);
}


TEST(VectorTests, ReverseVector)
{
  vector<int> testV = {1, 2, 3, 4, 5};

  reverse_vector(testV);

  for (int i = 0; i < testV.size(); i++)
  {
    ASSERT_EQ(testV[i], (5 - i));  
  }
}

TEST(VectorTests, SortAscVector)
{
  vector<int> testV = {5, 4, 3, 2, 1};

  sort_vector_asc(testV);

  for (int i = 0; i < testV.size(); i++)
  {
    ASSERT_EQ(testV[i], (i + 1));  
  }
}

TEST(VectorTests, SortDecVector)
{
  vector<int> testV = {1, 2, 3, 4, 5};

  sort_vector_desc(testV);

  for (int i = 0; i < testV.size(); i++)
  {
    ASSERT_EQ(testV[i], (5 - i));  
  }
}