#include <iostream>

using namespace std;

class Cuboid {
    protected:
        int length, width, height;
    public:
        void display();
};

class CuboidVol : public Cuboid {
    public:
        void read_input(int _length, int _width, int _height);
        int Volume();        
        void display();
    
};