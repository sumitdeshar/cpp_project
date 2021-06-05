#include<iostream>
using namespace std;
 void add(int a ,int b)
 {
    cout<<"addition of numbers: "<<a+b;
 }

 void add(int a , float b)
 {
    cout<<"addition of numbers: "<<a+b;
 }

  void add(float a , int b, float c)
 {
    cout<<"addition of numbers: "<<a+b+c;
 }

 int main()
 {
     add(10,15);
     cout<<endl;
     add(20,33.546f);
     cout<<endl;
     add(6.123f,14,33.333f);
     cout<<endl;
 }