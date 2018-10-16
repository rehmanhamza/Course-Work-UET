#include<iostream>
using namespace std;
int swap(int,int);
int swapx(int,int);
int main()
{
	int a,b,res,res1;
	cout<<"Enter two numbers to swap: "<<endl;
	cin>>a;
	cin>>b;
	res=swap(a,b);
	res1=swapx(a,b);
	cout<<"The swaped numbers are: "<<res<<","<<res1<<endl;
	system("pause");
	return 0;
}

int swap (int num1, int num2)
{

	num1 = num1 + num2;
	num2 = num1 - num2;
  	num1 = num1 - num2;
  	return num1;
  	
}
int swapx(int num1,int num2)
{
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	return num2;
}
