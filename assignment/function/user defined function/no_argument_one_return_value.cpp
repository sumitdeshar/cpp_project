#include<iostream>
using namespace std;

float getarea();

int main()
{
    float area;
    area=getarea();
    cout<<"area of triangle is:"<<area<<endl; 
} 

float getarea()
{
    float base,height, area_sub;
    cout<<"input Base and Height:"<<endl;
    cin>>base>>height;
    area_sub=((0.5)*base*height);
    return area_sub;
}