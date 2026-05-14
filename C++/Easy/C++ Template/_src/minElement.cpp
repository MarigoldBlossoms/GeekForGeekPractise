#include <iostream>
#include <string>

using namespace std;

template <class T>
class minElement
{
    private:
        T y;

    public:
        minElement(T val)
        {
            y = val;
        }

        void check(T x)
        {
            if (x < y)
            {
                cout << x << endl;
            }
            else
            {
                cout << y << endl;
            }
        }
};