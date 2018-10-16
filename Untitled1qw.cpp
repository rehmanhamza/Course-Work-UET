#include <iostream>
using namespace std;
int main()
{int a,d=0,n=0,bin;
	
	cout<<"enter a binary number:";
	cin>>bin;
	
loop:	
	a=bin%10;
	if(n==0){d=a	; n++; goto here; }
		  n=n*2;
	
	d=d+a*n;
	here:
	bin=bin/10;
	if(bin!=0){goto loop;
	}
	
	
	else cout<<"decimal number is:"<<d;
	
	return 0;
	
}
