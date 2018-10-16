#include<iostream>
using namespace std;

main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
	cout<<"Enter 9 elements for first matrix A: "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cin>>a[i][j];
	}
	cout<<"Enter 9 elements for second matrix B: "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cin>>b[i][j];
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<2;k++)
			//{
				sum=sum+a[i][k]*b[k][j];
			//}
			c[i][j]=sum;
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
