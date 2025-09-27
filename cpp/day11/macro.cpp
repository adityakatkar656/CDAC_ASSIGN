#include<iostream>
using namespace std;

#define Maximum(a,b) (a > b) ? a : b;

class macro{
    int a;
    public:
    virtual void show()=0;
    
};

int main(){
    int num =  Maximum(100,200);
    cout << "num is " << num << endl;
    cout << Maximum(100,200);
    return 0;
}
