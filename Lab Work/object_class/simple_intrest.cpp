//WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided
#include<iostream>
#include<conio.h>
using namespace std;

class intrest{
    public:
        double I , P , T , R ;
        char a;
        void get_info()
        {
            cout<<"Give Principal: "<<endl;
                cin>>P;
                cout<<"Give time: "<<endl;
                cin>>T;
                cout<<"Do you want to enter rate:\nType y\t\tn "<<endl;
                cin>>a;
                if(a=='y')
                {
                    cout<<"Give rate: "<<endl;
                    cin>>R;
                }else
                {
                    R=0.15;
                }
        }
        void cal()
        {
            I=(P*T*R)/100;
            cout<<"your intrest is: "<< I;
        }
};
int main()
{
    intrest z1;
    z1.get_info();
    z1.cal();
}
