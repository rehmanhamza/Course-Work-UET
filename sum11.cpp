#include <iostream>
using namespace std; 
 main()
{
    long num, temp, digit, sum = 0;
 
    cout<<"Enter the number \n";
    cin>>num;
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    cout<<"Given number = "<<temp<<endl;;
	cout<<"Sum of the digits = "<< sum;
}
