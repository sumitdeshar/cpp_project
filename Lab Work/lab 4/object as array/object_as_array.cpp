#include<iostream>
using namespace std;
class myclass{
    private :
    int x; 
    
    public:
    void setx(int i)
    {
        x=i;
    }

    int getx()
    {
        return x;
    }
};

int main()
{
    myclass classes[4]; // Array of "classes" object
    for (int  i = 0; i < 4; i++)
    {
        classes[i].setx(i); // Calling method through array
    
    }
    for (int  i = 0; i < 4; i++)
    {
        cout<<"classes["<<i<<"]: "<<classes[i].getx()<<endl;
    
    }
    
return 0;
}