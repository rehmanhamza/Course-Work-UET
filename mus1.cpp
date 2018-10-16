#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,x,c=0;
    
    do{
    	a=rand()%10;
    cout<<"Enter a number between 0 and 10 \n";
    cin>>x;
    if(x>a)
        cout<<"Entered number is too high. Try smaller number !\n";
        else if(x<a)
                    cout<<"Entered number is too low. Try higher number !\n";
        else
                cout<<"You got the right number.. !"<<endl;

    c++;
    }
    while(a!=x);
    cout<<"Total Attempts="<<c<<endl;

    return 0;
}
