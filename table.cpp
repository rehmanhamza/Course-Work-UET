#include<iostream>
using namespace std;
int main()

{
    int res,n,i=1;
    cout<<"enter a number to get it's table upto 10 multiples"<<endl;
    cin>>n;
    while(i<=10)
    {
        res=n*i;

        cout<<n<<"*"<<i<<"="<<res<<endl;
        i++;
    }

}
