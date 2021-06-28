//2. WAP to create sample class with 2 float data members and member functions void getdata() to input the values and 
//one friend function float mean(sample) to calculate and return mean value.
#include<iostream>
#include<conio.h>
using namespace std;

class group1{
    private:
        float num1, num2;
    public:
        friend class group2;
    void getdata()
    {
        cout<<"Give two number:"<<endl;
        cin>>num1>>num2;
    }        
};
class group2{
    public:
    float mean (group1 s1){
        return(s1.num1 + s1.num2)/2;
        }
};
int main(){
    group1 a;
    group2 b;
    a.getdata();
    cout<<"mean of two sample is:"<<b.mean(a)<<endl;
}