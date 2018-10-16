#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a[5]={"Pakistan","India","China","Iran","Russia"},temp;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		if(a[j]>a[j+1])
		{
		 	//string 
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
