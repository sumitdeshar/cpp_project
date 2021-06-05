#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[20], b[20];
    cout << "Enter string a: ";
    cin>>a;

    cout << "Enter string b: ";
    cin>>b;

    cout << "Final String = "<< strcat(a,b);
    return 0;
}