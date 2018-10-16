#include <iostream>

using namespace std;

int main()
{
    int sal[5], *p;
    //int i;
    p=&sal[5];
    for(int i=0;i<5;i++)
    {
        cin>>*(sal+i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<*(sal+i);
    }
    return 0;
}

