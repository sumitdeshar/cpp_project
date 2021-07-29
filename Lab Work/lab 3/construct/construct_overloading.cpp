#include<iostream>
#include<conio.h>
using namespace std;

class construct
{
    private:
            int a , b ;
    public:
            construct()
            {
                a=1;
                b=2;
            }
            construct(int a1, int b1)
            {
                a=a1;
                b=b1;
            }
            int getX()
            {
                return a;
            }
            int getY()
            {
                return b;
            }

};
int main(){
   construct c1(10,20),c;
   cout<<"when no argument is passed : "<<endl;
   cout<<"a="<<c.getX()<<endl<<"b="<<c.getY()<<endl;
   cout<<"when (10,20) is passed."<<endl;
   cout<<"a="<<c1.getX()<<endl<< "b="<<c1.getY()<<endl;
}