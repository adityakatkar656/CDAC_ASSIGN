#include<iostream>
using namespace std;
template<class t,class y>
void add(t a,y b)
{
    t c=a+b;
    cout<<c<<endl;
}
int main ()
{
    add(10,10.3);
    add(10.3,10);
}
