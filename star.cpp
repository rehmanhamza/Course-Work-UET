#include<iostream>
#include<conio.h>
using namespace std;
main( )
{  int i,j;

   i=1;
   while(i<=5)
   {
      cout<<" ";
      j=1;
      while(j<=i)
       {
         cout<<" * ";
         j++;
       }
       cout<<"\n";
       i++;
   }
    getch( );
}
