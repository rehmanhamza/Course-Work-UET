#include <iostream>
using namespace std;

template<class X>
void repeat(X data, int times)
{
    do{
    cout << data << "\n";
    times--;
}while(times); }

int main()
{
    repeat("This is a test", 3);
    repeat(100, 5);
    repeat(99.0/2, 4);
    return 0;
}
