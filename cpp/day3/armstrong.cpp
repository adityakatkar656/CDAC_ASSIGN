#include<iostream>
using namespace std;
int main()
{
    int num= 731;
    int onum=num;
    int final = 0;
    while (num!= 0)
    {
        int mod =num%10;
        num=num/10;
        int cube= mod*mod*mod;
        final += cube;

    }
    if (onum==final)
    {
        cout<<" it is armstrong number";
    }
    else
    cout<<"it is not armstrone number";
    
    
}