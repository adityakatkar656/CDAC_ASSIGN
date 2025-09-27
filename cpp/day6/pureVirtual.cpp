#include<iostream>
using namespace std;

class base{
   public:
   int a;
   virtual void show()=0;
};
class child : public base {
  public:
     void show(){
      cout << " inside child ";
    }
};
int main(){
    base *ptr = new child();
    ptr->show();
    return 0;
}