#include <iostream>
#include<conio.h>
using namespace std;
main()
{
	int num_bits,rem_bits;
	float num_bytes;
	cout<<"No. of Bits : ";
	cin>>num_bits;
	num_bytes=num_bits/8;
	rem_bits=num_bits%8;
	cout<<"No.of Bytes: "<<num_bytes<<endl;
	cout<<"Remaining Bits: "<<rem_bits<<endl;
	cout<<"Good Bye !"<<endl;
	getch();

}
