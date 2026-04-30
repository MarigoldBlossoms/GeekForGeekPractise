#include "cupid.h"

class Cuboid {
    protected:
        int length, width, height;
    public:
        void display()
        {
            printf("%d %d %d\n", length, width, height);
        }
};

class CuboidVol : public Cuboid {
    public:
        void read_input(int _length, int _width, int _height)
        {
            length = _length;
            width = _width;
            height = _height;
        }
        
        int Volume()
        {
            return (length * width * height);
        }
        
        void display()
        {
            cout << Volume() << endl;
        }
};