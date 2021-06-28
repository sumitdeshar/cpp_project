//3. WAP to add 2 private data of two different classes.#include<iostream>
#include<iostream>
#include<conio.h>
using namespace std;

class group1{
    private:
        int num1;
    public:
        friend class group2;
    void getdata()
    {
        cout<<"Give a number:"<<endl;
        cin>>num1;    
    }        
};
class group2{
    private:
        int num2;
    public:
    void getdata()
    {
        cout<<"Give a number:"<<endl;
        cin>>num2;    
    }
    int sum (group1 s1 , group2 s2){
        return(s1.num1 + s2.num2);
        }
};
int main(){
    group1 a;
    group2 b , c;
    a.getdata();
    b.getdata();
    cout<<"mean of two sample is:"<<c.sum(a,b)<<endl;
}