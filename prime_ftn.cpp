#include<iostream>
using namespace std;
int prime(int,int);
int a,b,x,i;
int main()
{
	int prim;
	cout<<"Enter two numbers to find 'Prime Numbers' between them: ";
    cin>>a;
    cin>>b;
    prim=prime(a,b);
    cout<<" "<<prim;
}
int prime(int a, int b)
{
    //int a,b,x,i;
    //cout<<"Enter two numbers to find 'Prime Numbers' between them: ";
    //cin>>a;
    //cin>>b;
    for(x=a+1;x<=b-1;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            break;
        if(i==x)
        cout<<" "<<x;
    }
	return x;    
}
