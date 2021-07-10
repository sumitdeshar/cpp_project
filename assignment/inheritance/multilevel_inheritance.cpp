#include <iostream>
using namespace std;
class Car
{

public:
    Car()
    {
        cout << "Constructor of Car " << endl;
    }
    ~Car()
    {
        cout << "Destructor of Car " << endl;
    }
};
class Sports_Car : protected Car // Sports_Cars is the child class of parent class car
{
public:
    Sports_Car()
    {
        cout << "Constructor of Sports Car" << endl;
    }
    ~Sports_Car()
    {
        cout << "Destructor of Sports Car" << endl;
    }
};
class Super_Car : private Sports_Car // Super_Cars is the child class of Sports_Cars
{
public:
    Super_Car()
    {
        cout << "Constructor of Super Car " << endl;
    }
    ~Super_Car()
    {
        cout << "Destructor of Super Car " << endl;
    }
};
int main()
{
    Super_Car BMW; // Construtor is called automatically by the compiler
    // Destructor is called upon exit
    return 0;
}