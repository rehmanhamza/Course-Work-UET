#include<iostream>
using namespace std;
main()
{
	int n=2,i=2,count=0;
	loop: if(n%i==0)
	{
		cout<<"NP";
		goto exit;
	 } 
	 else
	 {
	 	i++;
	 	n++;
	 }
	 if(i<n)
	 {
	 	count++;
	 	goto loop;
	 }
	 if(count==5)
	 cout<<"Num"<<n;
	 exit:;
	 return 0;
}
