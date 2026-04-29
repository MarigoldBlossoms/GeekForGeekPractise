#include "collegecourses.h"

class CollegeCourse
{
    private:
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;

    public:
    void set_CourseId(string cId)
    {
        courseID = cId;
    }

    void set_Grade(char g)
    {
        grade = g;
    }

    void set_Credit(int cr)
    {
        credits = cr;
    }

    int calculateGradePoints(char g)
    {
        if ((g >= 'a') && (g <= 'z'))
        {
            g-= 32;
        }
        
        switch(g)
        {
            case 'A':
                gradePoints = 10;
                break;
            case 'B':
                gradePoints = 9;
                break;
            case 'C':
                gradePoints = 8;
                break;
            case 'D':
                gradePoints = 7;
                break;
            case 'E':
                gradePoints = 6;
                break;
            case 'F':
                gradePoints = 5;
                break;
        }

        return gradePoints;
    }

    float calculateHonorPoints(int gp,int cr)
    {
        honorPoints = gp * cr;
        return honorPoints;
    }

    void display()
    {
        cout << gradePoints << " " << honorPoints << endl;
    }
};