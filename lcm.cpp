#include<iostream>
using namespace std;
int main()
{ int a,b,i;
        cout<<"enter a:  "; cin>>a;
        cout<<"\nenter b:  "; cin>>b;
        if(a>b){i=a;}
        else i=b;
        while(i>1){
            if(i%a==0 && i%b==0)
            {cout<<"\nlcm is:"<<i;
             break;
                }
      i++;  }


 return 0;}
