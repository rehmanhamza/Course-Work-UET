#include <iostream>
using namespace std;

int main()
{
 int a,b,c;
 c=0;
 b=2;
 m :a=2;
    if(c<5)
 {
   k:  if(a<b)
     {
         if(b%a==0)
         {
             b++;
             goto m;
         }
         else
         {
             a++;
             goto k;
         }
     }
     else
     {
         cout<<"\n"<<b;
         b++;
         c++;

         goto m;
     }


 }
 return 0;
}
