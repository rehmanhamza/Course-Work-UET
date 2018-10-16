#include<iostream>
using namespace std;
 int main()
 {
     int a,b;
     cin>>a;
     cin>>b;
     m :if(a!=b)
     {
   if(a>b)
     {
         a=a-b;

         goto m;
     }
     else
     {
         b=b-a;
         goto m;
     }
     }
     else
     {
         cout<<b;
     }

 }
