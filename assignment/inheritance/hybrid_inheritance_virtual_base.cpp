#include<iostream>
#include<conio.h>
using namespace std;

class city{
    public:
        void display()
        {
            cout<<"the cities of Nepal"<<endl;
        }
};
class Temple_city : virtual public city{
    public:
    void displayt()
    {
        cout<<"the city of temples"<<endl;
    }
};
class natural_city : virtual public city{
    public:
    void displayn(){
    cout<<"the city of natural resources"<<endl;
    }
};
class both : public Temple_city, public natural_city{
    public:
    void displayb(){
        cout<<"the city of temple and natural resource"<<endl;
    }
};
int main(){
    Temple_city kathmandu;
    natural_city lalitpur;
    both mustang;
    kathmandu.displayt();
    lalitpur.displayn();
    mustang.display();
    return 0;
}
