#include<iostream>
#include<string.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    char a[5][10] , s[10]; 
	int r;
	cout<<"Enter names of countries: "<<endl;
    for(int i=0; i<5; i++)
    {
        gets(a[i]);

    }
    for(int j=0; j<5; j++)
	{
        for(int i=0; i<4; i++){
        r=strcmp(a[i],a[i+1]);
        if(r>0) // for ascending order of names  
        {
            strcpy(s,a[i]);
            strcpy(a[i], a[i+1]);
            strcpy(a[i+1], s);
        }
            }
			}   cout<<endl<<endl;
 for(int i=0; i<5; i++)
    {
        puts(a[i]);

    }

}
