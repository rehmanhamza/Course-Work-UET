#include<iostream>
using namespace std;

main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	cout<<"Enter 9 elemets for first matrix A: "<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		cin>>a[i][j];
	}
	cout<<"Enter 9 elemets for second matrix B: "<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		cin>>b[i][j];
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		cout<<" "<<c[i][j];
		}
	cout<<endl;
	}

}
