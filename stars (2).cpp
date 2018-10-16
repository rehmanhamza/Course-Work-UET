#include<iostream>
using namespace std;
main()
{
	int r,c,i=1,j=1;
	cin>>r;
	cin>>c;
	loop2: if(j<=r)
	{
		loop: if(i<=c)
		{
			if(i%2==0)
			{
				cout<<"#";
			}
			else
            {
              cout<<"*";
            }
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
