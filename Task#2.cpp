#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int* re(int n, int *ptr, int x)
{
    ptr=(int*)realloc(ptr,((x*sizeof(int))+(n*sizeof(int))));
    cout<<"eneter the elements for the resized arrray";
    for(int i=n; i<n+x; i++)
    {
        cin>>*(ptr+i+n);
    }
    return ptr;
}
int* gen(int n)
{
    int *pt=(int*)malloc(sizeof(int)*n);
    cout<<"enter the "<<n<<" elements ";
    for(int i=0; i<n; i++)
    {
        cin>>pt[i];
    }
    return pt;
}
int main()
{
    int n, *p, *r;
    cout<<"enter size of the array  ";
    cin>>n;

    p=gen(n);
    cout<<"the numbers u enetered are  :" ;
    for(int j=0; j<n; j++)
    {
        cout<<*(p+j)<<endl;

    }
    int x;
    cout<<"enter the size for rezised array  ";
    cin>>x;
    r=re( n, p ,x );
    cout<<"the resized array is ";
    for(int k=0; k<x+n; k++)
    {
        cout<<endl<<*(r+k);
    }
}
