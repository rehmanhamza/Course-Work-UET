#include<iostream>
using namespace std;

class myclass{
private:
    int *p;
public:
    myclass(int i);
    myclass(const myclass &obj);
    ~myclass();
    int getvalue()
    {
        return *p;
    }
};

myclass::myclass(const myclass &obj)
{
    p=new int;
    *p=*obj.p;
    cout<<"Copy Constructor Called"<<endl;
}

myclass::myclass(int i)
{
    cout<<"Normal Constructor Called"<<endl;
    p=new int;
    *p=i;
}

myclass::~myclass()
{
    cout<<"Destructor Called"<<endl;
    delete p;
}

int main()
{
    myclass a(10);
    myclass b=a;
    return 0;
}
