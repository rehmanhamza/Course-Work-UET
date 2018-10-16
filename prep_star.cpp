//exam prep.......
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+5;j++)
		{
			if(j>=n+1-i && j<=n-1+i)
			cout<<"*";
			else
			cout<<" ";	
		}
		
		//cout<<"*";
		
		cout<<endl;
	}
	//cout<<endl;
	system("pause");
}
