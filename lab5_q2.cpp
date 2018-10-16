#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float result,powresult=1,n,x,fact=1,i,sum=0;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter x: ";
	cin>>x;
	//powresult=pow(x,n);
	for(i=1;i<=n;i++)
	{
		//powresult=pow(x,i);
		for(x=1;x<=i;x++)
		{
			powresult=powresult*x;
		}
		for(int j=i;j<=i;j++)
		{
			fact=fact*j;
		}
		
	}
		
	result=powresult/fact;
	sum=sum+result;
	//powresult=1;
	cout<<sum;
}
