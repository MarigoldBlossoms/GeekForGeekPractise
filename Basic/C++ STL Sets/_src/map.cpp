#include "stl.h"

/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &m, int x, int y) {
    auto it = m.find(x);
    
    if (it == m.end())
    {
        m.insert({x, y});
        return;
    }
    
    m.at(x) = y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &m, int x) {
    
    auto it = m.find(x);
    
    if (it != m.end())
        return it->second;
    
    return -1;
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int, int> &m) {
    for (auto it = m.begin(); it != m.end();  ++it)
    {
        cout << it->first << " " << it->second << " ";
    }
}