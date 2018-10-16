#include<iostream>
using namespace std;
int main()
{
    int x=1,sum=0,i=1;
    while(i<=10)
    {
        sum=sum+x;
        x=x+2;
        i++;

    }
    cout<<"sum="<<sum<<endl;

}
