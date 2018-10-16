#include<iostream>
using namespace std;
int sqr(int);
main()
{
	int n,res;
	cout<<"Enter a Number: ";
	cin>>n;
	res=sqr(n);
	cout<<"The sum of square of first "<<n<<" Natural Numbers = "<<res<<endl;
}
int sqr(int n)
{
	if (n==1)
	return 1;
	else
	return n*n+sqr(n-1);
}
