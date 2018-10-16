#include<iostream>
using namespace std;
int main()
{
    int a,b,x,i,count=0;
    cout<<"Enter two numbers to find 'Prime Numbers' between them: ";
    cin>>a;
    cin>>b;
    for(x=a;x<=b;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            break;
            
        if(i==x)
        
            cout<<" "<<x;
			 
            
    }
}
