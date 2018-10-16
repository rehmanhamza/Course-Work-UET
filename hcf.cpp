#include<iostream>
using namespace std;
int main()
{ int a,b,i;
        cout<<"enter a:  "; cin>>a;
        cout<<"\n enter b:  "; cin>>b;
        if(a<b){i=a;}
        else i=b;
        while(i>1){
            if(a%i==0 && b%i==0)
            {cout<<"/n hcf is:"<<i;
             break;
                }
      i--;  }


 return 0;}
