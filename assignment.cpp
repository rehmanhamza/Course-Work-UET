#include <iostream>
using namespace std;
main()
{
	int i,num1,num2,product,result;
	cout<<"enter num1 : ";
	cin>>num1;
	cout<<"enter num2 : ";
	cin>>num2;
	result=1;
	for(i=1;i<=num2;i++)
	result=result*num1;
	cout<<"result = "<<result<<endl;
}
