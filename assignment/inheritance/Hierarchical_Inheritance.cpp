#include <iostream>
using namespace std;
class Car
{
public:
    Car()
    {
        cout << "Constructor of Car" << endl;
    }
    ~Car()
    {
        cout << "Destructor of Car" << endl;
    }
};
class Super_Car : public Car
{
public:
    Super_Car()
    {
        cout << "Constructor of SuperCar" << endl;
    }
    ~Super_Car()
    {
        cout << "Destructor of SuperCar" << endl;
    }
};
class Electric_Car : public Car
{
public:
    Electric_Car()
    {
        cout << "Constructor of Electric Car" << endl;
    }
    ~Electric_Car()
    {
        cout << "Destructor of Electric Car" << endl;
    }
};
int main()
{
    Super_Car BMW;
    Electric_Car Tesla;
    return 0;
}