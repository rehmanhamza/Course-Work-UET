#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int r,i,j,k;
	cout<<"Enter No. of rows: ";
	cin>>r;
	for(i=0;i<=r;i++)
	{
		for(j=r-i;j>1;j--)
		{cout<<" ";}
		int s=1,den=1,n=i;
		for(k=0;k<=i;k++)
		{
			cout<<s<<" ";
			s=s*n;
			s=s/den;
			n--;
			den++;
		}
		cout<<endl;
	}
	getch();
}
