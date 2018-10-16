#include<iostream>
using namespace std;

main()
{
	int a[10],max=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	cout<<"Max= "<<max<<endl;
	int min=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"Min= "<<min<<endl;
}
