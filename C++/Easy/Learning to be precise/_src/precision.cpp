#include "precision.h"

void precise(float a, float b)
{
    float output = a/b;
    cout << fixed << setprecision(3) << output << endl;
}