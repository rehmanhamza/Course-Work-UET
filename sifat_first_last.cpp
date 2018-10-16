#include <iostream>
using namespace std;
int same(int);
int num, a, b, c;
bool var;
main()
{
cout<<"Enter a number: ";
cin>>num;
var = same(num);
if (var)
cout<<"The 1st and last digit are same";
else
cout<<"The 1st and last digit are not same";
}
int same(int)
{
a=num%10;
b=num;
while(b>10)
{
b=b/10; 
} 
if(a==b)
return true;
else
return false;
}
