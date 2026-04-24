#include "numbercheck.h"

void PrintNumber(int n)
{
    switch (n)
    {
        case 1:
            printf("one\n"); return;
        case 2:
            printf("two\n"); return;
        case 3:
            printf("three\n"); return;
        case 4:
            printf("four\n"); return;
        case 5:
            printf("five\n"); return;
        case 6:
            printf("six\n"); return;
        case 7:
            printf("seven\n"); return;
        case 8:
            printf("eight\n"); return;
        case 9:
            printf("nine\n"); return;
        case 10:
            printf("ten\n"); return;
    }
}

void isInRange(int n)
{
    if ((n >= 1) && (n <= 10))
    {
        PrintNumber(n);
        return;
    }

    printf("not in range\n");
}