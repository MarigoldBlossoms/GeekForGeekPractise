#include <iostream>

using namespace std;

class student
{
    public:
        int roll_number;
};


class test : public student
{
    public:
        int subjects = 5;
        int totalScores = 0;

        void set_marks(float marks[5]);
        int averageScore();
};

class result : public test
{
    public:
        void display();
};