#include <iostream>
using namespace std;
class complex
{
    float real, imag;

public:
    void getdata(float, float);
    void setformat();
    void display();

    complex operator+(const complex &obj)
    {
        complex temp;
        cout << "real value is: " << real << endl;
        cout << "imag value is: " << imag << endl;
        cout << "temp.real value is: " << temp.real << endl;
        cout << "temp.imag value is: " << temp.imag << endl;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};
void complex ::getdata(float real, float imag)
{
    this->real = real;
    this->imag = imag;
}
void complex ::setformat()
{
    cout << "The numbers you entered are " << endl;
    cout << real << " +i" << imag << endl;
}
void complex ::display()
{
    cout << "The sum is: " << endl
         << real << "+ i" << imag << endl;
}
int main()
{
    complex ci, cj, result;
    ci.getdata(2, 4);
    cj.getdata(3, 6);
    ci.setformat();
    cj.setformat();
    result = ci + cj;
    result.display();
}