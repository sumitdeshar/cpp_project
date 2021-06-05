#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20], b[20];
    cout << "Give a string"<< endl;
    cin>>a;
    cout<<"string copied = "<< strcpy(b,a);
    return(0);
}