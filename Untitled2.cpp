#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a, b, i;
	cout<<"Enter a:  ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	if(a>b)
	{
		i=a;
	}
	else
	{
		i=b;
	}
	loop: if(i%a==0 && i%b==0)
	{
		cout<<"LCM = "<<i<<endl;
	}
	else if(i<=(a*b))
	{
		i++;
		goto loop;
	}
	getch();
}
