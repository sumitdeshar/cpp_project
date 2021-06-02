#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,n;
	cout<<"Enter number till which you would like to add"<<endl;
	cin>>num;
    n=num;
	while(num>0)
	{
		sum=num+sum;
		num--;
	}
	cout<<"The sum of the first " <<n <<" natural number is:" <<sum;
	return 0;
}