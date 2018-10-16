#include<iostream>
#include<string>
//#include<string.h>
using namespace std;
main()
{
	string name,name1;
	getline(cin,name);
	getline(cin,name1);
	cout<<name<<endl<<name1<<endl;
	for(int i=0;i<name.size();i++)
	{
		cout<<name[i];
	}
	cout<<endl;
	for(int i=0;i<name1.size();i++)
	{
		cout<<name1[i];
	}
	cout<<endl;
	if(name.empty())
	{
		cout<<"Hotdog";
	}
	else
	{
		cout<<"Not Hotdog";
	}
	//strcmp(name,name1);
	//cout<<endl<<name;
	swap(name,name1);
	cout<<endl<<name;
	name.find("Humxa");
	cout<<endl<<name.find("Humxa"); 
	return 0;
}
