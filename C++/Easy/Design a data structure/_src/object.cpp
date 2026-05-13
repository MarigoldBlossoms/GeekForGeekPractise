#include "object.h"

// inserts an integer at the end of the data structure.
void insert(int x)
{
    l.push_back(x);
}

// prints the element of the data structure
// the new line is given by the driver's code
void print() {
    for (auto item : l)
    {
        cout << item << " ";
    }

    cout << endl;
}

// replaces the first occurence of x with
// sequence.
void replace(int x, vector<int> sequence)
{
    auto insertPos = find(l.begin(), l.end(), x);

    if (insertPos != l.end())
    {
        //Move forward 1 position, and removed the replaced value
        insertPos++;
        l.remove(x);
        l.insert(insertPos, sequence.begin(), sequence.end());
    }

}