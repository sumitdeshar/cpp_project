  
#include <iostream>
using namespace std;

void functionfirst(int a)
{
    cout<<"value of a before altering is:"<< a<<endl;
    a=5;
    cout<<"value of a after altering is:"<< a<<endl;
}

void functionReference(int &b)
{
    b=10;
    cout<<"value of b is:"<<b<<endl;

}
int main ()
{
    int a=1;
    int b=2;
    functionfirst(a);
    functionReference(b);
    cout<<"value of a in main:"<<a<<endl;
    cout<<"value of b in main:"<<b<<endl;
}