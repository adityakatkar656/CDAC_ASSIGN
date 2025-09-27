#include<iostream>
using namespace std;

class demo{
    int a;
    public:
    demo(){
        a = 10;
    }
    void show(){
        cout << "inside demo";
    }
    friend class friend1;
};
class friend1{
    public:
    void display(demo& t){
       cout << "private variable a " << t.a;
    }
};

int main(){
    demo d;
    friend1 f;
    f.display(d);
    return 0;
}
