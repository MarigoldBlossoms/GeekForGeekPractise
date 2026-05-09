#include "marks.h"

int marks(int a)
{
    try
    {
        if ((a >= 0) && (a <= 100)) return a;
        else throw -1;
    }
    catch(int e)
    {
        return e;
    }
}