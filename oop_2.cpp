#include<iostream>
using namespace std;

const int size=100;

template<class t>
class queue{
private:
    t q[size];
    int sloc, rloc;
public:
    queue()
    {
        sloc=rloc=0;
    }

    void qput(t i);
    t qget();
};

template<class t>
void queue<t>::qput(t i)
{
    if(sloc==size)
    {
        cout<<"Queue if Full"<<endl;
        return;
    }
    sloc++;
    q[sloc]=i;
}

template<class t>
t queue<t>::qget()
{
    if(rloc==sloc)
    {
        cout<<"Queue underflow"<<endl;
        return 0;
    }
    rloc++;
    return q[rloc];
}

int main()
{
    queue<int>a,b;
    a.qput(10);
    b.qput(19);
    a.qput(20);
    b.qput(1);

    cout<<a.qget()<<" ";
    cout<<b.qget()<<" ";
    cout<<a.qget()<<" ";
    cout<<b.qget()<<" ";
}
