#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20], b[20];
    cout << "Give a string a"<< endl;
    cin>>a;
    cout << "Give a string b"<< endl;
    cin>>b;
    if(strcmp(a,b)==0)
        {
            cout<<"string are same"<< endl;
        }
    else
    {
        cout<<"string are not same"<< endl;
    }    
    return(0);
}