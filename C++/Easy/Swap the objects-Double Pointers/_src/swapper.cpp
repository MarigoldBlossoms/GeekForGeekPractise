
class Person
{

};

void swapper(Person **obj1, Person **obj2) {
    Person temp;
    
    temp = **obj1;
    **obj1 = **obj2;
    **obj2 = temp;
}
