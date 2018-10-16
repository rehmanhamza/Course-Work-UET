#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
 
  cout<<"Enter any two numbers\n";
  cin>>num1;
  cin>>num2;
 
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
 
  cout<<"After swapping,the numbers are: "<<num1<<","<<num2<<endl;
 system ("pause");
  return 0;
}
