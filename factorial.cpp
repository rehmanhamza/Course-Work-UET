#include<iostream>
using namespace std;
int main()
{
    unsigned long int i=1,factorial=1,num;
    cout<<"Enter a +ve integer: ";
    cin>>num;
    while(i<=num)

    {
        factorial=factorial*i;
        i++;

    }
    cout<<"factorial of "<<num<<" is "<<factorial<<endl;
    return 0;

}
