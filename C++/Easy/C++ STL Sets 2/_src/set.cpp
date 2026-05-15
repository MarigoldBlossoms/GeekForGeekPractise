#include "set.h"

/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string, pair<int, int> > > &A, string str, int x, int y)
{
    A.push_back({str, {x, y}});
}

/* Returns the size of the vector A */
int get_size(vector<pair<string, pair<int, int> > > &A)
{
    return A.size();
}

/* Prints space separated values of vector A */
    
void print_values(vector<pair<string, pair<int, int> > > &A) {
    for (int indexV = 0; indexV < A.size(); indexV++)
    {
        pair<string, pair<int, int>> data = A.at(indexV);
        
        cout << data.first << " " << data.second.first << " " << data.second.second << " ";
    }
}
    
/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string, pair<int, int> > > &A) {
    // Your code here
    auto lesser = [](pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
    {
        if (a.second.first == b.second.first)
        {
            return a.second.second < b.second.second;
        }
        return a.second.first < b.second.first;
    };

    sort(A.begin(), A.end(), lesser);
}