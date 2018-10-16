#include<iostream>
using namespace std;
main()
{
	int r=4,c=5,i=1,j=1;
	loop2: if(j<=r)
	{
		loop: if(i<=c)
		{
		
				cout<<"#";
	            i++;
				goto loop;	
		
		}
		cout<<"\n";
		i=1;
		j++;
		goto loop2;
		
	}
	return 0;
}
