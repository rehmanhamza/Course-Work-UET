#include <iostream>
using namespace std;
main()
{
int r,i;
cout<<"Enter the number of rows: ";
cin>>r;
for(i=0; i<r; i++)
{
for(int k=0; k<=i; k++)
{
if(k==0 || k==i || i==r-1)
cout<<"*"; 
else
cout<<" ";
}
cout<<endl;
}
}
