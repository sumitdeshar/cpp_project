  
#include<iostream>
using namespace std;

void getarea(double, double);

int main()
{
    float base,height,area;
    cout<<"input Base and Height:"<<endl;
    cin>>base>>height;
    getarea(base, height);
      
} 

void getarea(double b, double h)
{
    float area;
    area=((0.5)*b*h);
    cout<<"area of triangle is:"<<area<<endl;         
}