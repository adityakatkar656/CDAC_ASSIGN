#include<iostream>
using namespace std;
class Complex
{
    int a;
    static int cnt;
    public:
    int real;
    int img;
    Complex();
    Complex(int i,int j);
    void show();
    
    static int get();
};
int Complex::cnt=9;
void Complex::show()
{
    cout << real << "+" << img << "i"<<endl;
}
int Complex::get()
{
    return cnt;
}
Complex::Complex()
{
    cout<<"non parametriz constructor call"<<endl;
     real=10;
     img=23;
     cnt++;
}
Complex::Complex(int i,int j)
{
    cout<<"paramitrize constructor call"<<endl;
    real=i;
    img=j;
   cnt++;
}

int main()
{   Complex c1,c2;
    Complex c3(5,6);
    cout<<Complex::get();
    Complex c4(4,5);
    c4.show();

}