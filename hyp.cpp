#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x,y,a;
	float hyp;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	a=(x*x)+(y*y);
	hyp=sqrt(a);
	cout<<"Hyp: "<<hyp<<endl;
	return 0;
	
}
