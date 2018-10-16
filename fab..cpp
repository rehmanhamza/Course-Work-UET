#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=0,i,n;
    cout<<"Enter a number to obtain its Fibonacci Series: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<c<<" ";
        c=a+b;
        b=a;
        a=c;
    }
}
