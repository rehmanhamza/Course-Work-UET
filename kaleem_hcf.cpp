#include<iostream>
using namespace std;
int hcf(int a, int b, int i)
{
    if(a%i==0 && b%i==0) 
	return i;
    else 
	return hcf(a,b,i--);
}

int main()
{
    int a,b,i;
    cin>>a>>b;
     if(a<b) 
	 i=a; 
	 else 
	 i=b;

     cout<<endl<<hcf(a,b,i);   
     
}
