#include <iostream>
#include <queue>

using namespace std;

/*add the element in the
priority queue*/
void addElement(priority_queue<int> &A, int x)
{
    A.push(x);
    
}

/* remove top element from
the priority queue*/
void remove_Element(priority_queue<int> &A)
{
    if (A.empty())
    {
        cout << -1 << endl;
    }
    else
    {
            cout << A.top() << endl;
    A.pop();
    }
}

/*  returns the top element
of the priority queue*/
int getElement_at_top(priority_queue<int> &A)
{
    return A.empty() ? -1 : A.top();
}

/* returns the size of
    
the priority queue*/
int getSize(priority_queue<int> &A)
{
    return A.empty() ? -1 : A.size();
}

    
/* prints the element in
the priority queue*/
void print(priority_queue<int> &A)
{
    if (A.empty())
    {
        cout << -1 << endl;
        return;
    }
    
    priority_queue<int> output = A;
    while (!output.empty())
    {
        cout << output.top() << " ";
        output.pop();
    }
    cout << endl;
}