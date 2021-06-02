#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
    char name[20],address[50];
    int roll;
};
int main()
{
    student a;
    cout<<"Enter your name:";
    cin>>a.name;
    cout<<"Enter your roll:";
    cin>>a.roll;
    cout<<"Enter your address:";
    cin>>a.address;
    cout << "Name: " << a.name << endl;
    cout << "Roll: " << a.roll << endl;
    cout << "Address: " << a.address << endl;
return 0;
}
