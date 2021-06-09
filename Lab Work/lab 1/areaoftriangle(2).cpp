#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {
    int A,B,C;
    float area,sp;

    cout<<"enter 3 sides of a triangle"<<endl;
    cout<<"Enter side a:";
    cin>>A;
    cout<<"enter side b:";
    cin>>B;
    cout<<"enter side c:";
    cin>>C;

    sp=(A+B+C)/2;
    area = sqrt(sp*(sp-A)*(sp-B)*(sp-C));
    cout<<"The area of triangle is:"<<area ;
    return 0;
}