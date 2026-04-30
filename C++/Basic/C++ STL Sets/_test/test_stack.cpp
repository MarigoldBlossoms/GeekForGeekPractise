#include <gtest/gtest.h>

#include "../_src/stl.h"

TEST(StackTests, SizeTest)
{
    stack<int> s;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        s.push(i+1);
    }
    
    ASSERT_EQ(getSize(s), size);
}

TEST(StackTests, GetTop)
{
    stack<int> s;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        s.push(i+1);
    }
    
    ASSERT_EQ(getTop(s), s.top());
}

TEST(StackTests, AddStack)
{
    stack<int> s;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        s.push(i+1);
    }

    push(s, 6);
    
    ASSERT_EQ(getSize(s), size + 1);
}

TEST(StackTests, PopStack)
{
    stack<int> s;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        s.push(i+1);
    }
    
    int popVal = pop(s); 
    ASSERT_EQ(s.size(), size - 1);
    ASSERT_EQ(popVal, 5);
}