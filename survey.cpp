#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=1,coff=0,tea=0,coke=0,org=0,choc;
    cout<<"\t******Menu******"<<endl;
    cout<<"1.Coffee            2.Tea\n"
          "3.Coke              4.Orange Juice"<<endl;
          do{
                cout<<"Enter favorite beverage of person # "<<i<<" from above menu (or -1 to exit)"<<endl;
                cin>>choc;
            if(choc==1){coff=coff+1;}
            else if(choc==2){tea=tea+1;}
            else if(choc==3){coke=coke+1;}
            else if(choc==4){org=org+1;}
            else if(choc==-1){break;}
            else
                cout<<"Invalid !"<<endl;
          i++;
          }
          while(i>=1);
            cout<<"The total number of person survyed is "<<i<<". The result is as follows:\n\n BEVERAGES\tNUMBER OF VOTES"<<endl;
            cout<<"*************************************"<<endl;
            cout<<"Coffee\t\t\t"<<coff<<endl;
            cout<<"Tea\t\t\t"<<tea<<endl;
            cout<<"Coke\t\t\t"<<coke<<endl;
            cout<<"Orange Juice\t\t"<<org<<endl;

            getch();

}

