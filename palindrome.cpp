#include<iostream>
using namespace std;
int main()
{
	int num,rem,rev=0,palin;
	cin>>num;
	palin=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}

	if(rev==palin)
	cout<<"PALINDROME !"<<endl;
	else
	cout<<"NOT A PALINDROME !"<<endl;
	system("pause");
	return 0;
}

