#include <iostream>
using namespace std;
main()
{
int r,j,i;
cout<<"Enter the number of rows: ";
cin>>r;
for(i=0; i<r; i++)
{
for(j=r-i+1; j>1; j--)
{
cout<<" ";
}
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
