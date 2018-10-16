#include<iostream>
using namespace std;
bool iseven (int);
int main()
{
	int num; bool status;
	cout<<"Enter a Number: ";
	cin>>num;
	status=iseven(num);
	if(status==true)
	{
		cout<<num<<" is Even !";
	}
	else 
	cout<<num<<" is Odd !";
	return 0;
}

bool iseven(int n)
{
	if(n%2==0)
	return true;
	else 
	return false;
}
