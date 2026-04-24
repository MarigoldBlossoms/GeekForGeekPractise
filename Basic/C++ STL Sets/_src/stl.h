#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//Vector
/*inserts an element x at
the back of the vector A */
void add_to_vector(vector<int> &A, int x);
/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A);
/*reverses the vector A*/
void reverse_vector(vector<int> &A);
/*returns the size of the vector  A */
int size_of_vector(vector<int> &A);
/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A);
/*prints space separated
elements of vector A*/
void print_vector(vector<int> &A);

//Stack
/*the function pushes an element
x into the stack s */
void push(stack<int> &s, int x);
/*pops the top element of the
stack and returns it */
int pop(stack<int> &s);
/*returns the size of the stack */
int getSize(stack<int> &s);
/*returns the top element    
of the stack */
int getTop(stack<int> &s);