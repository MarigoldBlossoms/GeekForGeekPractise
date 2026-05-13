#include <iostream>

using namespace std;

/* class: User
instance variable: name(String)
constructor:
First: { parameter: none, task: initialize the instance variable to "Default".}
Second: { parameter: name(String), task: initialize the instance variable to the value provided in the parameter.} */

class User
{
    public:
        string name;

        User()
        {
            name = "Default";
        }

        User(string userName)
        {
            name = userName;
        }
};