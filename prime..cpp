#include<iostream>
using namespace std;
int main()
{
    int num,a=2;
    cout<<"enter number to check prime number=";
    cin>>num;
    while(a<num)
    {
        if(num%a==0)
        {
            cout<<num<<" is not prime"<<endl;
            return 0;
        }
        a++;
    }
    cout<<num<<" is prime";
 return 0;
}
