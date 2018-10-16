#include<iostream>
using namespace std;

int main()
{
    int a,b,i;
    i=0;
    cin>>a;
    cin>>b;
    label:i++;
    if(i%a==0 && i%b==0 )
    {
        cout<<i;
    }
    else
    {
        goto label;
    }

}
