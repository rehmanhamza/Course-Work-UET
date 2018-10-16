#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"\t\t\tMORSE CODE ENCRYPTOR\n\n";
    char a, input;

    do{
        cout<<"Enter Alphabet: ";
        cin>>a;

        if(a=='a' || a=='A')
        {
            cout<<a<<" in Morse Code is .-"<<endl;
        }
        else if(a=='b' || a=='B')
        {
            cout<<a<<" in Morse Code is -..."<<endl;
        }
        else if(a=='c' || a=='C')
        {
            cout<<a<<" in Morse Code is -.-."<<endl;
        }
        else if(a=='d' || a=='D')
        {
            cout<<a<<" in Morse Code is -.."<<endl;
        }
        else if(a=='e' || a=='E')
        {
            cout<<a<<" in Morse Code is ."<<endl;
        }
        else if(a=='f' || a=='F')
        {
            cout<<a<<" in Morse Code is ..-."<<endl;
        }
        else if(a=='g' || a=='G')
        {
            cout<<a<<" in Morse Code is --."<<endl;
        }
        else if(a=='h' || a=='H')
        {
            cout<<a<<" in Morse Code is ...."<<endl;
        }
        else if(a=='i' || a=='I')
        {
            cout<<a<<" in Morse Code is .."<<endl;
        }
        else if(a=='j' || a=='J')
        {
            cout<<a<<" in Morse Code is .---"<<endl;
        }
        else if(a=='k' || a=='K')
        {
            cout<<a<<" in Morse Code is -.-"<<endl;
        }
        else if(a=='l' || a=='L')
        {
            cout<<a<<" in Morse Code is .-.."<<endl;
        }
        else if(a=='m' || a=='M')
        {
            cout<<a<<" in Morse Code is --"<<endl;
        }
        else if(a=='n' || a=='N')
        {
            cout<<a<<" in Morse Code is -."<<endl;
        }
        else if(a=='o' || a=='O')
        {
            cout<<a<<" in Morse Code is ---"<<endl;
        }
        else if(a=='p' || a=='P')
        {
            cout<<a<<" in Morse Code is .--."<<endl;
        }
        else if(a=='q' || a=='Q')
        {
            cout<<a<<" in Morse Code is --.-"<<endl;
        }
        else if(a=='r' || a=='R')
        {
            cout<<a<<" in Morse Code is .-."<<endl;
        }
        else if(a=='s' || a=='S')
        {
            cout<<a<<" in Morse Code is ..."<<endl;
        }
        else if(a=='t' || a=='T')
        {
            cout<<a<<" in Morse Code is -"<<endl;
        }
        else if(a=='u' || a=='U')
        {
            cout<<a<<" in Morse Code is ..-"<<endl;
        }
        else if(a=='v' || a=='V')
        {
            cout<<a<<" in Morse Code is ...-"<<endl;
        }
        else if(a=='w' || a=='W')
        {
            cout<<a<<" in Morse Code is .--"<<endl;
        }
        else if(a=='x' || a=='X')
        {
            cout<<a<<" in Morse Code is -..-"<<endl;
        }
        else if(a=='y' || a=='Y')
        {
            cout<<a<<" in Morse Code is -.--"<<endl;
        }
        else if(a=='z' || a=='Z')
        {
            cout<<a<<" in Morse Code is --.."<<endl;
        }
        cout<<endl<<endl<<"Try for another one? (y/n)"<<endl;
        cin>>input;
        cout<<endl;
    }while(input=='y' || input=='Y');

    if(input!='y')
	{
		cout<<"Press any key to quit!"<<endl;
	}

	getch();
}
