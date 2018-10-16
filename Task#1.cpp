#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int *sortt(int *x)
{
    int temp;
 for(int i=0;i<10; i++)
    {
 for(int i=0; i<9; i++)
 {
     if(*(x+i)<*(x+i+1))
     {
         temp=*(x+i);
         *(x+i)=*(x+i+1);
         *(x+i+1)=temp;
     }
 }
    }
    return x;
}
int main()
{
    int a[10] , *p;
    cout<<"enter 10 numbers  :";
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    p=sortt(a);


 for(int i=0; i<10; i++)
 {
     cout<<endl<<*(p+i);
 }
}
