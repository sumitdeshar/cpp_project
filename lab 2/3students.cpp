#include<iostream>
using namespace std;
struct student
{
    int roll;
    char name [20], address[20];
};
int main()
{
    student s[3];
    for(int i = 0; i < 3; i++)
    {
    cout<<"Enter the details of the student "<<i+1<<": "<<endl;
    cout<<"Enter your name:";
    cin>>s[i].name;
    cout<<"Enter your roll:";
    cin>>s[i].roll;
    cout<<"Enter your address:";
    cin>>s[i].address;
    }
    for(int i = 0; i < 3; i++)
    {
    cout << "Name: " << s[i].name << endl;
    cout << "Roll: " << s[i].roll << endl;
    cout << "Address: " << s[i].address << endl;
    }
    return 0;
}
