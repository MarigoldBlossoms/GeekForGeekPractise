#include "swap.h"

void swap(int* a, int* b)
{
    //printf("%d %d\n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;
}