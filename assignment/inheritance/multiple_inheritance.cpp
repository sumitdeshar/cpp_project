#include <iostream>
using namespace std;
class Sports_Car
{

public:
    Sports_Car()
    {
        cout << "Constructor of Sports Car" << endl;
    }
    ~Sports_Car()
    {
        cout << "Destructor of Sports Car " << endl;
    }
};
class Super_Car
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
class BMW : protected Sports_Car, protected Super_Car

{
public:
    BMW()
    {
        cout << "Constructor of BMW " << endl;
    }
    ~BMW()
    {
        cout << "Destructor of BMW " << endl;
    }
};
int main()
{
    BMW BMW_modelA;
    return 0;
}