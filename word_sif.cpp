#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string units[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string tens[11]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety","hundred"};
	int num,a,b;
	cout<<"Enter a number in digit: ";
	cin>>num;
	//thousands
	if(num>=1000)
	{
		a=num/1000;
		num=num%1000;
		if(a>100)
		{
			int x=a/100;
			cout<<units[x]<<" hundred ";
			a=a%100;
		}
		if(a>0&&a<20)
		{
			cout<<units[a]<<" ";
		}
		else if(a>19&&a<=100)
		{
			int y,z;
			y=a/10;
			cout<<tens[y]<<" ";
			z=a%10;
			if(z!=0)
			{
				cout<<units[z]<<" ";
			}

		}
		cout<<" thousand ";
	}
	//hundreds
	if(num>=100)
	{
		a=num/100;
		num=num%100;
		if(a>0&&a<20)
		{
			cout<<units[a];
		}
		else if(a>19&&a<=100)
		{
			int y,z;
			y=a/10;
			cout<<tens[y]<<" ";
			z=a%10;
			if(z!=0)
			{
				cout<<units[z]<<" ";
			}
		}
		cout<<" hundred and ";
	}
	//tens
	if(num<100 && num>=20)
	{
		a=num/10;
		cout<<tens[a]<<" ";
		int x=num%10;
		if(x!=0)
		{
			cout<<units[x]<<" ";
		}
		cout<<" only... ";
	}
	if(num<20)
	{
		cout<<units[num];
		cout<<" only...";
	}
}
