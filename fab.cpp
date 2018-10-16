#include <iostream>
#include<math.h>
using namespace std;
int main()
{double a=0,b=1,i=1,sum;

while(i<=15)
	{	sum=a+b;
		cout<<a<<",";
		i++;
		a=b;
		b=sum;
	}


}
