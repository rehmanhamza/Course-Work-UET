#include<iostream>
using namespace std;
int lcm(int,int,int);

int main()
{
    int a,b,i;
    cin>>a>>b;
     if(a>b) 
	 i=a; 
	 else 
	 i=b;

     cout<<"LCM = "<<lcm(a,b,i);   
     
}
int lcm(int a, int b, int i)
{
    if(i%a==0 && i%b==0) 
	return i;
    else 
	return lcm(a,b,i=i+1);
}
