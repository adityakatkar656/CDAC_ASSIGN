#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(int a){
       this->a = a;
    }
   void show(){
        cout << a << endl;
}
};
class B{
    int b;
    public:
    B(int b){
        this->b = b;
    }
    void show(){
        cout << this->b << endl;
    }
};
class C : public A,public B{
   int c;
   public:
   C(int c,int a, int b):A(a),B(b){
   this->c = c;
   }
   //void show(){
  //  cout << c << endl;
//  A::show();
  // B::show();
  // }
};
int main(){
    C c(20,30,40);
    //c.show() ambiguity occurs
    c.B::show();
    return 0;
}