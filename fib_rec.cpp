#include<iostream>
using namespace std;
int fib(int);
main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<" "<<fib(i);
	}
}
int fib(int n)
{
	if (n==1 || n==2)
	return 1;
	else
	return fib(n-2)+fib(n-1);
}
