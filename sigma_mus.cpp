#include<iostream>
using namespace std;
int pow(int,int);
int fact(int);
int main()
{
    float n,k,x,power,factorial;
    float res,sum=0;

    cout<<"enter the value of N : ";
    cin>>n;

    cout<<"enter the value of X : ";
    cin>>x;
    for(k=1;k<=n;k++)
    {
    power=pow(x,k);
    factorial=fact(k);
    res=power/factorial;
    sum=sum+res;
    }
    cout<<"The answer of series : "<<sum;
    return 0;
}
int power(int b,int p)
{
	int c=1;
    for(int a=1;a<=p;a++)
    {
        c=c*b;
    }
    
	return c;

}
int fact(int a)
{
    int i=1,f=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
