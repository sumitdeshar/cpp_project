//WAP to define a class named employee with it's data members ID, Name and Salary. Read records of five employees and display the record in tabular form [Hint- to make the data display in tabular #include<iostream>
#include<iostream>
#include<conio.h>
using namespace std;

class employee{
    public:
        char name [100];
        double salary;
        int member_id;
        void get_info(){
                cout<<"Write your name: "<<endl;
                cin>>name;
                cout<<"Write your member ID:"<<endl;
                cin>>member_id;
                cout<<"Write your salary:"<<endl;
                cin>>salary;    
            }
        void display(){
            cout<<"Name:"<<name<<"\tMember ID:"<<member_id<<"\tSalary:"<<salary<<endl;
        }    
};
int main()
{
    employee e[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Enter the details od employee"<<i+1<<endl;
        e[i].get_info();
    }   
    for(int i=0; i<5; i++)
    {
        e[i].display();
        cout<<endl;
    }
}