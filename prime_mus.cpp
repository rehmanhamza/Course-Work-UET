#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int up,down,k;
    bool p=false;
    cout<<"Enter the upper limit: ";
    cin>>up;
    cout<<"enter the lower limit: ";
    cin>>down;
    while(down<up)
    {
         p=prime(down);
    if(p==true)
    {
    cout<<(down)<<endl;

    }
         down++;
}
return 0;
}
int prime(int a)
{
    int i=1;
    bool r;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
