#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			if(j<=n+1-i)
			cout<<"*";
			else
			cout<<"#";
		}
		cout<<endl;
	}
}
