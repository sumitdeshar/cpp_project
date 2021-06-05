  
#include<iostream>
using namespace std;

double getarea(double, double);

int main()
{
    double base,height,area;
    cout<<"input Base and Height:"<<endl;
    cin>>base>>height;
    area=getarea(base,height);
    cout<<"area of triangle is:"<<area<<endl;    
} 

double getarea(double b, double h)
{
    double area;
    area=((0.5)*b*h);        
    return area;
}