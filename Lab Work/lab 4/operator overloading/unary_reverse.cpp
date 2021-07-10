#include<iostream>
#include<conio.h>
using namespace std;

class unary{
    int a,b,c;
    public:
    void getdata(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    // return type operator operand op() eg ++,--
    void operator -(){
        a= -a;
        b= -b;
        c= -c;
    }
    void display(){
        cout<<"the value of a :"<<a<<endl;
        cout<<"the value of b :"<<b<<endl;
        cout<<"the value of c :"<<c<<endl;
    }
};
int main(){
    unary u1;
    u1.getdata(1, -2, 3);
    u1.display();
    -u1;
    u1.display();
}