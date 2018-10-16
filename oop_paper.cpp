#include<iostream>
#include<string.h>
using namespace std;

class oop{
	private:
		char *name;
		int size;
	public:
		oop()
		{
			name; 
			size=0;
		}
		oop(char *nm, int s)
		{
			name = new char [strlen(nm)+1];
			strcpy(name,nm);
			size=s;
		}
		
		void display()
		{
			cout<<name<<endl<<size<<endl;
		}
		~oop()
		{
			delete []name;
			cout<<"Deleting name[]"<<endl;
		}
};

int main()
{
	oop o("Hamza",19);
	o.display();
	//o.oop("Rehman",19);
	//o.display();
}
