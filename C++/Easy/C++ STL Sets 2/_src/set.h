#include <iostream>
#include <vector>

using namespace std;

/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string, pair<int, int> > > &A, string str, int x, int y);

/* Returns the size of the vector A */
int get_size(vector<pair<string, pair<int, int> > > &A);

/* Prints space separated values of vector A */
void print_values(vector<pair<string, pair<int, int> > > &A);

/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string, pair<int, int> > > &A);