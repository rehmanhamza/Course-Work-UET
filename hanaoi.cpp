#include <iostream>

using namespace std;

void towers(int,char,char,char);

int main()

{

    int n;

    cout<<"\n\t\t\t\t\tTHE TOWER OF HANOI"<<endl;

    cout<<"\n\t\t\tMove All disks 'n' from tower A to tower B considering the following rules"<<endl;

    cout<<"\t\t\ta: Tower 'C' is an auxillary and can be used temporarily"<<endl;

    cout<<"\t\t\tb: Only one  disk can be moved at a time"<<endl;

    cout<<"\t\t\tc: No longer disk may be put on a top of a smaller disk"<<endl;

    cout<<"\t\t\tNote : User will enter the value of n(number of disks)"<<endl;

    cout<<"Enter the number of disks : ";

    cin>>n;

    cout<<endl<<"To move "<<n<<" disks from tower A to tower B following steps are required :"<<endl;

    towers(n,'A','C','B');

    // to count the steps :::

   int count=1;

    for(int i=0;i<n;i++)

    {

    	count=count*2;

	}

    cout<<endl<<endl<<"\t\t\tCount of steps to solve the Hanoi Tower : "<<count-1;



    return 0;
}

// int towers (int num,char towerA,char towerC,char towerB)

void towers(int num,char towersource,char toweraux,char towerdest)

{

    if (num==1)

    {

        cout<<endl<<"Move disk "<<num<<" from tower "<<towersource<<" to tower "<<towerdest<<endl;

        cout<<"disk "<<num<<":\n"<<towersource<<" ==> "<<towerdest;

        return;

    }
    
    else
    
    {
    	
       towers(num-1,towersource,towerdest,toweraux);
	
	}
  

    cout<<endl<<"Move disk "<<num<<" from tower "<<towersource<<" to tower "<<towerdest<<endl;

    cout<<"disk "<<num<<":\n"<<towersource<<" ==> "<<towerdest;

    towers(num-1,toweraux,towersource,towerdest);
    
}
