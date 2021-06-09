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
    student s;
    cout<<"Enter your name:";
    cin>>s.name;
    cout<<"Enter your roll:";
    cin>>s.roll;
    cout<<"Enter your address:";
    cin>>s.address;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Address: " << s.address << endl;
return 0;
}
