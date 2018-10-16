#include<iostream>
using namespace std;
struct book
{
	int bookid;
	char title[20];
	float price;
};
book input();
void display (book);
main()
{
	book b1;
	b1=input();
	display(b1);
}
void display(book b)
{
	cout<<endl<<b.bookid<<endl<<b.title<<endl<<b.price<<endl;
}
book input()
{
	book b;
	cout<<"Enter book id: ";
	cin>>b.bookid;
	cout<<"Enter book title: ";
	cin>>b.title;
	cout<<"Enter book price: ";
	cin>>b.price;
	return b;
	
}
