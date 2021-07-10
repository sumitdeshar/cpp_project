#include <iostream>
using namespace std;
class unary
{
private:    
    int x, y, z;

public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    /*Syntax for operator overloading:
     return type operator +/-() */
    void operator++()
    {
        x = ++x;
        y = ++y;
        z = ++z;
    }
    void display()
    {
        cout << "The value of x is:" << x << endl;
        cout << "The value of y is:" << y << endl;
        cout << "The value of z is:" << z << endl;
    }
};
int main()
{
    unary u1;
    u1.getdata(2, 4, 5);
    cout << "The number before unary operator is: " << endl;
    u1.display();
    ++u1; // Calling the unary operator by simply adding perfix operator sign infront of the object
    cout << "The number after unary operator is: " << endl;
    u1.display();
    return 0;
}