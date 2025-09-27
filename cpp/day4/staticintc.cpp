#include<iostream>
using namespace std;
class Complex
{
    public:
        static int a;
         void add(int i,int j=5);
};
int Complex::a=1;
void Complex::add(int i,int j)
{    
    int k=i+ j;
    cout<<"i + J = "<<k<<" "<<a<<endl;
    a++; 
}
int main()
{ Complex c1;
    for (int i = 0; i < 5; i++)
    {
        c1.add(2,9);
    }
    


}
  