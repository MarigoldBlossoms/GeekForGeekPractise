#include <iostream>
#include <string>

using namespace std;

class CollegeCourse
{
    public:
    void set_CourseId(string cId);
    void set_Grade(char g);
    void set_Credit(int cr);
    int calculateGradePoints(char g);
    float calculateHonorPoints(int gp,int cr);
    void display();
};