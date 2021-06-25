#include<iostream>
using namespace std;

class Helloworld
{
    public:
    Helloworld(){
        cout<<"Contructor is called"<<endl;
    }
    ~Helloworld(){
        cout<<"Destructor is called"<<endl;
    }
    void display(){
        cout<<"HELLO WORLD!"<<endl;
    }
};
int main(){
    Helloworld obj;
    obj.display();
    return 0;
}