#include<iostream>
using namespace std;
int main()
{
	int cr1, cr2;
	float gpa1, gpa2, cgpa;
	cin>>cr1;
	cin>>gpa1;
	cin>>cr2;
	cin>>gpa2;
	cgpa=((cr1*gpa1)+(cr2*gpa2))/ (cr1+cr2);
	cout<<cgpa;
}
