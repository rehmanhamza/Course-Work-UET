#include<iostream>
using namespace std;

int main()
{
	double vi,vf,a,t;
	int check;
	char choice;
	cout<<"Numerical Solver v1.0"<<endl;
	cout<<"1st Equation of Motion:\t Vf=Vi+at"<<endl;
	do{
	cout<<"What do you want to calculate?\n1.Vi \t2.Vf \n3.t \t4.a \nSelect Your Choice"<<endl;
	cin>>check;
	if(check==1)
	{
		cout<<"Enter Vf ";
		cin>>vf;
		cout<<"Enter t ";
		cin>>t;
		cout<<"Enter a ";
		cin>>a;
		cout<<"The Value of Vi is "<<(vf-(a*t))<<" m/s"<<endl;	
	}
	
	if(check==2)
	{
		cout<<"Enter Vi ";
		cin>>vf;
		cout<<"Enter t ";
		cin>>t;
		cout<<"Enter a ";
		cin>>a;
		cout<<"The Value of Vf is "<<(vi+(a*t))<<" m/s"<<endl;	
	}
	
	if(check==3)
	{
		cout<<"Enter Vf ";
		cin>>vf;
		cout<<"Enter Vi ";
		cin>>t;
		cout<<"Enter a ";
		cin>>a;
		cout<<"The Value of t is "<<((vf-vi)/a)<<" s"<<endl;	
	}
	
	if(check==4)
	{
		cout<<"Enter Vf ";
		cin>>vf;
		cout<<"Enter Vi ";
		cin>>t;
		cout<<"Enter t ";
		cin>>a;
		cout<<"The Value of a is "<<((vf-vi)/t)<<" m/s^2"<<endl;	
	}
	cout<<"Do you want to try again? Press y to continue or anyother key to terminate."<<endl;
	cin>>choice;
	}while(choice=='y');
} 
