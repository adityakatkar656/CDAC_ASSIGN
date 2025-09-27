#include<iostream>
using namespace std;


class A{
   public:
    int a,b,c;
    A(int a){
          this->a = a;
       cout << "inside a"<<a<< endl;  
    }
    A(){
        cout << "inside A" << endl;
    }
};
class B:virtual public A{
    public:
    int x;
     B(int a,int x):A(a){
         this->x = x;
          cout << "inside b" << endl;
     }
    B(){
        cout << "inside b" << endl;
    };
};
class C:virtual public A{
    public:
    int y;
      C(int a):A(a){
    this->y =  y;
     cout << "inside c"<< endl;
      }
    C(){
        cout << "inside c"<< endl;
    }
};
class D:public B,public C{
    public:
   // int d;
     D(int x ,int a):B(x,a),C(x){
        // this->d = d;

     }
    D(){
        cout << "inside d"<< endl;
    }
};

int main(){
    D d(30,40);
    return 0;
}
