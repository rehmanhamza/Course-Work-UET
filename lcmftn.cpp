#include <iostream>

using namespace std;
int lcm(int,int);
int main()
{
    int a,b,res;
    cout<<"Enter two Numbers to find their LCM: ";
    cin>>a;
    cin>>b;
    res=lcm(a,b);
    cout<<res;
    return 0;
}

int lcm(int x,int y)
{
    int i,lcmx;
    if(x>y)
    {
        i=x;
    }
    else
    i=y;
    while(i>=1)
    {

        if(i%x==0 && i%y==0)
            {lcmx=i;
            break;}
            i++;
    }
    return lcmx;
}
