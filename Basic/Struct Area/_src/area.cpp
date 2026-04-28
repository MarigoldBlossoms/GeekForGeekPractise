#include "area.h"

struct area
{
    int sd;
    int len, wid;
};

void find_area(int side, int le, int wd) 
{
    area a;
    a.sd = side;
    a.len = le;
    a.wid = wd;

    cout << (a.sd * a.sd) << " " << (a.len * a.wid);
}