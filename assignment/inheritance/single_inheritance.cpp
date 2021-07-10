#include <iostream>
using namespace std;
class Car
{

public:
    Car()
    {
        cout << "Constructor of  " << endl;
    }
    ~Car()
    {
        cout << "Destructor of Cars " << endl;
    }
};
class Sports_Car : private Car
{
public:
    Sports_Car()
    {
        cout << "Constructor of Sports Cars " << endl;
    }
    ~Sports_Car()
    {
        cout << "Destructor of Sports Cars " << endl;
    }
};
int main()
{
    Sports_Car BMW;
    return 0;
}