#include <iostream>
using namespace std;

class animal
{
    public:
    void movement()
    {
        cout<<"I have movement"<<endl;
    }
    animal(){
        cout<<"constructor of animal"<<endl;
    }
    ~animal(){
        cout<<"Destructor of animal"<<endl;
    }
};
class dog : public animal{
    public:
    dog(){
        cout<<"constructor of dog"<<endl;
    }
    ~dog(){
        cout<<"destuctor of dog class"<<endl;
    }
};
int main(){
    animal *a1;
    a1=new dog;
    a1->movement();
    delete a1;
    return 0;
}