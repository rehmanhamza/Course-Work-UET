#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    int f1=0, f2=0, f3=0, f4=0, f5=0, f6=0, face;
    for(int roll=1; roll<=6000000; roll++)
    {
        face=1+rand()%6;
        switch (face)
        {
            case 1:
                ++f1;
                break;
            case 2:
                ++f2;
                break;
            case 3:
                ++f3;
                break;
            case 4:
                ++f4;
                break;
            case 5:
                ++f5;
                break;
            case 6:
                ++f6;
                break;
            default:
                cout<<"Program should never get here!"<<endl;
        }
    }

        cout<<"Face"<<setw(13)<<"Frequency"<<endl;
        cout<<"   1"<<setw(13)<<f1<<endl;
        cout<<"   2"<<setw(13)<<f2<<endl;
        cout<<"   3"<<setw(13)<<f3<<endl;
        cout<<"   4"<<setw(13)<<f4<<endl;
        cout<<"   5"<<setw(13)<<f5<<endl;
        cout<<"   6"<<setw(13)<<f6<<endl;

        int sum_of_all_f=f1+f2+f3+f4+f5+f6;
        cout<<"Sum of all frequencies = "<<sum_of_all_f<<endl;
}
