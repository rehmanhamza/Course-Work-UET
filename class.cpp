#include<iostream>
#include<conio.h>
using namespace std;
class GradeBook
{
	public:
	void displayMessage()
	{
		cout<<"Welcome to the Gradebook"<<endl;
	}
};
	
	
	int main()
	{
		GradeBook myGradeBook;
		myGradeBook.displayMessage();
		getche();
	}

