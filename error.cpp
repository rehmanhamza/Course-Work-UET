#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int num;
int a=0;
cout<<"Enter any num : ";
cin>>num;
//temp=num;
while(num>0)
{
num=num/10;
a++;
}
cout<<"\n no. of digits in given number is: "<<a<<endl;;
long temp,digit,sum=0;   
temp=num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
	}
    cout<<"Given number = "<<temp<<endl;;
	cout<<"Sum of the digits = "<< sum;
}

