#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n, i=1, factorial=1;
    cout<<"Enter a +ve integer: ";
    cin>>n;
    while(i<=n)
    {
        factorial *= i;
        ++i;
    }
    cout<<"Factorial of "<<n<<" = "<<factorial;
    getch();
}
