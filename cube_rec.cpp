#include<iostream>
using namespace std;
int cube(int);
main()
{
	int n,res;
	cout<<"Enter a Number: ";
	cin>>n;
	res=cube(n);
	cout<<"The sum of cube of first "<<n<<" Natural Numbers = "<<res<<endl;
}
int cube(int n)
{
	if (n==1)
	return 1;
	else
	return n*n*n+cube(n-1);
}
