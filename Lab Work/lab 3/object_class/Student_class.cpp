//WAP to define a class in C++ as shown : class name - Student attributes - name, roll, address, percentage methods - input(), display()
#include<iostream>
#include<conio.h>
using namespace std;
// create a class
class student{
    private:
        char name [100];
        int roll;
        char address [100];
        double percentage;
    public:
        void input(){
            cout<<"Write your name: "<<endl;
            cin>>name;
            cout<<"Write your roll:"<<endl;
            cin>>roll;
            cout<<"Write your address:"<<endl;
            cin>>address;
            cout<<"Write your percentage:"<<endl;
            cin>>percentage;
        }
        void output()
        {
            if (percentage<45)
            {
                cout<<"Student failed the exam";
            }else
            {
                cout<<"Name:"<<name<<"\nAddress:"<<address<<"\nrollno:"<<roll<<"\nPercentage:"<<percentage<<endl;

            }

        }
};
int main(){
    student s1;
    s1.input();
    s1.output();
}

