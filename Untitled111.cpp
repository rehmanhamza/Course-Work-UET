#include <iostream>
using namespace std;
class student
{
	private:
	string name[5][10];
	string fname[5][10];
	int batch[5][10];
	char sec[5][10];
	long rno[5][10];
	int i;
	int j;
	
	public:
	void set_student()
	{
		for (i=1; i<=2; i++)
		{
			for(j=1; j<=2; j++)
			{
				cout<<"\nEnter Student Name:  ";
				cin>>name[i][j];
				cout<<"\nEnter Student Father Name:  ";
				cin>>fname[i][j];
				cout<<"\nEnter Batch:  ";
				cin>>batch[i][j];
				cout<<"\nEnter Section:  ";
				cin>>sec[i][j];
				cout<<"\nEnter Registration No:  ";
				cin>>rno[i][j];
				
			}
	    }
	}
	
	void get()
	{
		for (i=1; i<=2; i++)
		{
			for(j=1; j<=2; j++)
			{

					cout<<"Name :"<<name[i][j]<<endl;
					cout<<"Father Name :"<<fname[i][j]<<endl;
					cout<<"Batch :"<<batch[i][j]<<endl;
					cout<<"Section :"<<sec[i][j]<<endl;
					cout<<"Registration No :"<<rno[i][j]<<endl;
				
			}
		}
	}
	
	void search(int num)
	{
		for (i=1; i<=2; i++)
		{
			for(j=1; j<=2; j++)
			{
				if(i==num && j==num
				)
				{
					cout<<name[i][j];
				}
				else
				{
					cout<<"No Record Found";
				}
			}
		}
	}
};
main ()
{
	
	student x;
	x.set_student();
	x.get();
	int num;
	cout<<"Enter regstraiton no:";
	cin>>num;
	x.search(num);
	
}
