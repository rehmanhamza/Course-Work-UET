#include<iostream>
#include<math.h>
using namespace std;
int main()
{  int xo=0,yo=0,xi,yi,s,n=0,t=0,x,y;	
 	loop:															//	 while(xo!=xi && yo!=yi){
do{	cout<<"enter the new x coordinate: \t ";
	cin>>xi;
	cout<<"enter the new y coordinate:  \t "<<endl;
	cin>>yi;  }while(xi<0 || yi<0);   
	
	if(xo==xi && yo==yi){ goto exit;	}
		n++; 
		x=xi-xo; y=yi-yo;
		s=sqrt(pow(x,2)+pow(y,2));
	t=t+s; 
		xo=xi; yo=yi;	goto loop;         // while(xo!=xi && yo!=yi);
exit:					
cout<<"total distance travelled is:  "<<t<<endl<<endl;
cout<<"total number of steps is:   "<<n;
	
	
		return 0;
               }


