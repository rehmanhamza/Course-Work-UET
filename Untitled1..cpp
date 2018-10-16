#include <iostream>

using namespace std;

int main()
{
    int i;
    int j,k;
    for(i=1; i<=5; i++)
    {  cout<<"\n";
        for(j=5;j>=i;j-- )
        {
            cout<< " " ;
        }
        for(k=1; k<=i; k++)
        {
            cout<<"* " ;
        }
    }
     for(i=4; i>=1; i--)
    {  cout<<"\n";
        for(j=5;j>=i;j-- )
        {
            cout<< " " ;
        }
        for(k=1; k<=i; k++)
        {
            cout<<"* " ;
        }
    }


return 0;
}
