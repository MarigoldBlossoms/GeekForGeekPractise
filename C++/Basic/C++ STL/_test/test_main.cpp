#include <gtest/gtest.h>
#include "../_src/queue.h"
#include <queue>

using namespace std;

TEST(QueueSTLTests, TestPush)
{
    queue<int> q;

    for (int i = 0; i < 5; i++)
    {
        q.push(i * 2);
    }

    push(q, 20);
    
    ASSERT_EQ(q.size(), 6);
    ASSERT_EQ(q.back(), 20);
}

TEST(QueueSTLTests, TestPop)
{
    queue<int> q;

    for (int i = 0; i < 5; i++)
    {
        q.push(i * 2);
    }

    ASSERT_EQ(pop(q), 0);
    ASSERT_EQ(q.size(), 4);
}

TEST(QueueSTLTests, TestSize)
{
    queue<int> q;

    for (int i = 0; i < 5; i++)
    {
        q.push(i * 2);
    }

    ASSERT_EQ(getSize(q), 5);
}

TEST(QueueSTLTests, TestBack)
{
    queue<int> q;

    for (int i = 0; i < 5; i++)
    {
        q.push(i * 2);
    }

    ASSERT_EQ(getBack(q), 8);
    ASSERT_EQ(q.size(), 5);
}

TEST(QueueSTLTests, TestFront)
{
    queue<int> q;

    for (int i = 0; i < 5; i++)
    {
        q.push(i * 2);
    }

    ASSERT_EQ(getFront(q), 0);
    ASSERT_EQ(q.size(), 5);
}

TEST(QueueSTLTests, TestEmpty)
{
    queue<int> q;

    ASSERT_EQ(pop(q), -1);
    ASSERT_EQ(getBack(q), -1);
    ASSERT_EQ(getFront(q), -1);
}