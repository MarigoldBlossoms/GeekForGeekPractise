#include "student.h"

void test::set_marks(float marks[5])
{
    for (int i = 0; i < subjects; i++)
    {
        totalScores += marks[i];
    }
}

int test::averageScore()
{
    return totalScores / subjects;
}