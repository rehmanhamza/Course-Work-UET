#include <iostream>
#include<cstdlib>
#include <ctime>
 #include <windows.h>
 
using namespace std;
int main()
{  int ran1, ran2, ran3 , ran4, ran5;
    int i=1, sum=0 ;  srand(time(0));
            for(i=1; i<=200; i++){
    sum=0;       while(sum!=100){  ran1=rand()%100+1; ran2=rand()%100+1 ; ran3=rand()%100+1 ; ran4=rand()%100+1 ;ran5=rand()%100+1 ; sum=ran1+ran2+ran3+ran4+ran5;     }
   cout<<ran1<<"+"<<ran2<<"+"<<ran3<<"+"<<ran4<<"+"<<ran5<<"="<<sum<<endl;  }     
return 0;
}
