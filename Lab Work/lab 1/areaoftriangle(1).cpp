#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float base, height, area;
    cout<<"Enter the base of triangle : \n";
    cin>>base;
    cout<<"Enter the height of triangle : \n";
    cin>>height;
    area=0.5*(base*height);
    cout<<"the area of triangle is :"<<area;
    return(0);
}