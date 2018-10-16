#include<iostream>
using namespace std;

class animal{
protected:
    int legs;
public:
    //int legs;
    virtual void print() const
    {
        cout<<"Unknown animal type"<<endl;
    }
};

class fish: public animal{
public:
    fish(int n)
    {
        legs=n;
    }
    void print() const
    {
        cout<<"Fish has "<< legs <<" legs"<<endl;
    }
};

class bird: public animal{
public:
    bird(int n)
    {
        legs=n;
    }
    void print() const
    {
        cout<<"A bird has "<<legs<<" legs"<<endl;
    }
};

class mammal: public animal{
public:
    mammal(int n)
    {
        legs=n;
    }
    void print() const
    {
        cout<<"A mammal has "<<legs<<" legs"<<endl;
    }
};

int main()
{
    animal *ptr[4];
    ptr[0]=new fish(0);
    ptr[1]=new bird(2);
    ptr[2]=new mammal(4);
    ptr[3]=new animal;
    for(int i=0; i<4; i++)
        ptr[i]->print();
    return 0;
}
