#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <list>
#include <unordered_map>

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

//Map
/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &m, int x, int y);
/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &m, int x);
/* Prints contents of the map ie keys and values*/
void print_contents(map<int, int> &m);

//Set
/*inserts an element x to the set s */
void insert(set<int> &s, int x);
/*prints the contents of the set s */
void print_contents(set<int> &s);
/*erases an element x from the set s */
void erase(set<int> &s, int x);
/*returns 1 if the element x is    
present in set s else returns -1 */
int find(set<int> &s, int x);
/*returns the size of the set s */
int size(set<int> &s);

//Lists
/*prints space separated
elements of list A*/
void print(list<int> &A);
/*remove element from
back of list A*/
void remove_from_back(list<int> &A);
/*remove element from
front of list A*/
void remove_from_front(list<int> &A);
/*inserts an element x at    
the back of the list A */
void add_to_list(list<int> &A, int x);
/*sort the list A in ascending order*/
void sort_list(list<int> &A);
/*reverses the list A*/
void reverse_list(list<int> &A);
/*returns the size of the list  A */
int size_of_list(list<int> &A);
/*inserts an element x at
the front of the list A*/
void add_from_front(list<int> &A, int x);


//Deque
/*prints space separated
elements of the deque A*/
void print(deque<int> &A);
/*inserts an element x at
the front of the deque A*/
void add_in_front(deque<int> &A, int x);
/*inserts an element x at
the back of the deque A */
void add_in_back(deque<int> &A, int x);
/*remove element from
back of the deque A*/
void remove_from_back(deque<int> &A);
/*remove element from
front of the deque A*/
void remove_from_front(deque<int> &A);
/*sort the the deque A in ascending order*/
void sort(deque<int> &A);
/*reverses the deque A*/ 
void reverse(deque<int> &A);
/*returns the size of the deque  A */
int size(deque<int> &A);
/* returns element at front
of the deque*/
int element_at_front(deque<int> &A);
/*returns element at end
of the deque*/
int element_at_back(deque<int> &A);


//Unordered map
/*Inserts an entry with key x and value y in map */
void add_value(unordered_map<int, int> &m, int x, int y);
/*Returns the value with key x from the map */
int find_value(unordered_map<int, int> &m, int x);
/*Returns the size of the map */
int getSize(unordered_map<int, int> &m);    
/*Removes the entry with key x from the map */
void removeKey(unordered_map<int, int> &m, int x);