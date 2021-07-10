#include<iostream>
#include<conio.h>
using namespace std;

class mobile{
    private:
        int m = 10;
    public:
        void display()
        {
            cout<<"m = "<<m<<endl;
            cout<<"this->"<<this->m<<endl;
            cout<<this<<endl;
        }    
};
int main(){
    mobile m1 , m2;
    m1.display();
    m2.display();
    return 0;
}