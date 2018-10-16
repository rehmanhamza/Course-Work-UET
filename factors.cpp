#include<iostream>
using namespace std;
int main()
{
    int i=1,num;
    cout<<"Enter Num: ";
    cin>>num;
    while(i<num)
    {
        if(num%i==0)
        {
          cout<<i<<",";

        }
        i++;
    }
    return 0;
}
