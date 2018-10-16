#include <iostream>

using namespace std;

int main()
{   int n;
    cout << "Please Enter a Number: "<<endl;
    cin>>n;

    while(n/10!=0)
    {
        n=n/10;
    }

    cout<<"The Most Significant Digit is: "<<endl;
    cout<<n;
    return 0;
}
