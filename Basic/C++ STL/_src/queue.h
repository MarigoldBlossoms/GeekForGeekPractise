#include <queue>

using namespace std;

/*inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x);

/*pop out the front element
from the queue q and returns it */
int pop(queue<int> &q);

/*returns the size of the queue q */
    
int getSize(queue<int> &q);
    
/*returns the last element of the queue */
int getBack(queue<int> &q);

/*returns the first element of the queue */
int getFront(queue<int> &q);