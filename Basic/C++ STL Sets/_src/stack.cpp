#include "stl.h"

/*the function pushes an element
x into the stack s */
void push(stack<int> &s, int x) {
    s.push(x);    
}

/*pops the top element of the
stack and returns it */
int pop(stack<int> &s) {
    if (!s.empty())
    {
        int popVal = s.top();
        s.pop();
        return popVal;
    }
    return -1;
}

/*returns the size of the stack */
int getSize(stack<int> &s) {
    return s.size();
}

/*returns the top element
of the stack */
int getTop(stack<int> &s) {
    if (!s.empty())
    {
        return s.top();
    }
    return -1;
}