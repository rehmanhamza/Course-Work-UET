#include<iostream>
using namespace std;

class vector{
private:
    int x,y;
public:
    vector(): x(0),y(0){};
    vector(int xx, int yy): x(xx), y(yy){};
    void print();
    vector operator + (vector &b);
    vector operator - ();
    vector operator - (vector &b);
};

void vector::print()
{
    cout<<x<<" "<<y<<endl;
}

vector vector::operator + (vector &b)
{
    int sum_x,sum_y;
    sum_x=x+b.x;
    sum_y=y+b.y;
    return vector (sum_x,sum_y);
}

vector vector::operator - ()
{
    return vector(-x,-y);
}

vector vector::operator - (vector &b)
{
    int diff_x, diff_y;
    diff_x=x-b.x;
    diff_y=y-b.y;
    return vector(diff_x,diff_y);
}

int main()
{
    vector u(1,1), v(2,2), sum, neg, diff;
    sum=u+v;
    sum.print();
    neg=-sum;
    neg.print();
    diff=u-v;
    diff.print();

}


class iset{
private:
    int n, *a;
public:
    iset()
    {
        a=nullptr;
        n=0;
    }
    iset(int x)
    {
        a=nullptr;
        *this +=x;
        n=1;
    }
    ~iset()
    {
        delete[]a;
    }

    iset &operator +=(int x);
    iset &operator -=(int x);
    int operator () (int x);
    void print();
    iset &operator =(iset S);
    iset (const iset &S);
    operator int()
    {
        return n;
    }
};

const int block = 5;

static int *memoryspace (int *p0, int n0, int n1)
{
    int *p1=new int[n1];
    if(p0 != nullptr)
    {
        for(int i=(n0<n1 ? n0:n1)-1; i>=0; i--)
            p1[i]=p0[i];
        delete p0;
    }
    return p1;
}

int binsearch (int x, int *a,int n)
{
    int m,l,r;
    if(n==0 || x<= a[0])
        return 0;
    if(x> a[n-1])
        return n;
    l=0;
    r=n-1;
    while(r-l > 1)
    {
        m=(l+r)/2;
        (x<=a[m] ? r:l)=m;
    }
    return r;
}

