#include<iostream>
using namespace std;
int main()
{
    int x=1,count=0,sum;
    while(x<=20)
    {

        sum=count+x;
        cout<<count<<"+"<<x<<"="<<sum<<endl;
        count=sum;
        x++;

    }

}
