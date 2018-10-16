#include<iostream>
using namespace std;
int a,b,num;
bool cond;
int same_diff(int);
int main()
{
	cout<<"Enter a number: ";
	cin>>num;
	cond=same_diff(num);
	if(cond==1)
	cout<<"1st and Last are same !"<<endl;
	else
	cout<<"NOT SAME !"<<endl;
}
int same_diff(int)
{
	a=num%10;
	b=num;
	while(b>10)
	{
		b=b/10;
	}
	if(a==b)
	return 1;
	else
	return 0;
}
