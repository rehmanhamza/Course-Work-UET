#include<iostream>
using namespace std;
int sum(int);
main()
{
	int n,res;
	cout<<"Enter a number: ";
	cin>>n;
	res=sum(n);
	cout<<"The sum of first "<<n<<" Natural Numbers = "<<res<<endl;
}
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
