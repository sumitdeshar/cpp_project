#include<iostream>
#include<conio.h>
using namespace std;
class circle{
    public:
        double radius;
        double compute_area()
        {
            return 3.14*radius*radius;
        }
};
int main()
{
    circle obj;
    obj.radius 5;
    obj.compute_area();
}