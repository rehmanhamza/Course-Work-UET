#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int guess,input,attempts=0;
	srand(time(0));
	guess=rand()%10+1;
	do{
	cout<<"Guess a number between 1 and 10"<<endl;
	cin>>input;
	attempts++;
	if(input<guess)
	{
		cout<<"Number Too Low"<<endl;
	}
	if(input>guess)
	{
		cout<<"Number Too High"<<endl;
	}
	if(input==guess)
	{
		cout<<"You Guess the Right Number"<<endl;
	}
	}while(input!=guess);
	cout<<"Attempts: "<<attempts<<endl;
}
