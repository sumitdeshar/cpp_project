#include<iostream>

using namespace std;

void getarea();

int main()
{
    getarea();
} 

void getarea()
{
    float b,h,area;
    cout<<"input Base and Height:"<<endl;
    cin>>b>>h;
    area=((0.5)*b*h);
    cout<<"area of triangle is:"<<area<<endl;         
}