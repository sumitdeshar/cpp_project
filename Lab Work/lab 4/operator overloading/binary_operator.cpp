// using overloading, we can use operators as + , - to add user defined data type as object
#include <iostream>
using namespace std;

class binary
{
    int a, b;

public:
    binary()
    {
        a = 0;
        b = 0;
    }

    binary(int X, int Y)
    {
        a = X;
        b = Y;
    }

    // return type binary, object as an argument binary bin
    // here single argument is passed because in binary operator overloading, the calling object is passed implicitely and the second object is passed through the argument
    // since the overloading function is a member function, the variables can be accessed directly

    binary operator+(binary bin)
    {
        binary temp;
        // calling object is implecitely passed i.e obj 1
        cout << "Value of temp a inside overloading function is : " << temp.a << endl;
        cout << "Value of temp b inside overloading function is : " << temp.b << endl;

        // second object is passed as an argument
        cout << "Value of a in a inside overloading function is : " << bin.a << endl;
        cout << "Value of b in b inside overloading function is : " << bin.b << endl;

        temp.a = a + bin.a;
        temp.b = b + bin.b;

        return temp;
    }
    void display();
};

void binary::display()
{
    cout << "Value of a is : " << a << endl;
    cout << "Value of b is : " << b << endl;
}

int main()
{
    // default constructor is called
    binary b1, b2, b3;
    b1 = binary(10, 15);
    b2 = binary(20, 25);
    // calling overloaded operator
    b3 = b1 + b2;
    // displaying object 1
    b1.display();
    // displaying object 2
    b2.display();
    // displaying value of sum of object 1 and object 2
    cout << " These are sum :" << endl;
    b3.display();
}