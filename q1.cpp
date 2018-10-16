#include <iostream>

using namespace std;
int fact(int);
int main()
{
    int num,res;
    cout<<"Enter a Number: ";
    cin>>num;
    res=fact(num);
    cout<<res;
    return 0;
}

int fact(int n)
{
    int i=1,factx=1;
    while(i<=n)
    {
        factx=factx*i;
        i++;
    }
    return factx;
}
