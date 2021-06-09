#include <iostream>
using namespace std;


void swap(int &a, int &b) 
{
    int x;
    x = a;
    a = b;
    b = x;
}

int main()
{
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}