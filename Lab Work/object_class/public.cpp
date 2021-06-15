#include<iostream>
using namespace std;

class Room{
    public:
        double length;
        double breadth;
        double height;

        double calArea(){
            return length * breadth;
        }
        double calVolume(){
            return length * breadth * height;
        }
}
int main(){
    room room1;
    romm1.length = 42.5;
    room1.breadth = 20.8;
    room.height = 19.2;
    cout <<"area of room =" << room1.calArea()<<endl;
    cout <<"volume of room =" << room1.calVolume()<<endl;
    return 0;
}