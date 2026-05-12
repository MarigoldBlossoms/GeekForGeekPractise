#include "binary.h"

int powerOf2(int power)
{
    if (power == 0) return 1;

    return 2 * powerOf2(power - 1);
}

int findMaxPowerOf2(int num)
{
    int power = 0;
    
    while (powerOf2(power) <= num)
    {
        ++power;
    }

    return --power;
}

int getNextInQueue(queue<int> &q)
{
    if (q.empty()) return 0;
    int next = q.front();
    q.pop();
    return next;
}


string decToBinary(int n)
{
    int num = n;
    string b;

    bool odd = (num % 2 > 0);
    if (odd) num -= 1;

    queue<int> powers;

    while (num > 1)
    {
        int power = findMaxPowerOf2(num);
        powers.push(power);

        num -= powerOf2(power);
    }

    int currP = getNextInQueue(powers);
    int next = getNextInQueue(powers);

    while (currP > 0) 
    {
        b += "1";
        while ((currP > (next + 1)) && (currP > 1))
        {
            b += "0";
            --currP;
        }

        currP = next;
        next = getNextInQueue(powers);
    }

    if (odd) 
    {
        b += "1";
    }
    else
    {
        b += "0";
    }

    return b;
}