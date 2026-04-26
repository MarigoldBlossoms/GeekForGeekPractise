#include "stl.h"

/*prints space separated
elements of the deque A*/
void print(deque<int> &A) {
    if (A.empty())
    {
        cout << -1 << endl;
        return;
    }
    
    for (int it : A)
    {
        cout << it << " ";
    }
    cout << endl;
}

/*inserts an element x at
the front of the deque A*/
void add_in_front(deque<int> &A, int x) {
    A.push_front(x);
}

/*inserts an element x at
the back of the deque A */
void add_in_back(deque<int> &A, int x) {
    A.push_back(x);
}

/*remove element from
back of the deque A*/
void remove_from_back(deque<int> &A) {
    if (A.empty()) return;
    A.pop_back();
}

    
/*remove element from
front of the deque A*/
void remove_from_front(deque<int> &A) {
    if (A.empty()) return;
    A.pop_front();
    
}

/*sort the the deque A in ascending order*/
void sort(deque<int> &A) {
    sort(A.begin(), A.end());
}

/*reverses the deque A*/ 
void reverse(deque<int> &A) {
    reverse(A.begin(), A.end());
}

/*returns the size of the deque  A */
int size(deque<int> &A) {
    return A.size();
}

/* returns element at front
of the deque*/
int element_at_front(deque<int> &A) {
    return A.front();
}

/*returns element at end
of the deque*/
int element_at_back(deque<int> &A) {
    return A.back();
}