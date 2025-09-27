#include<iostream>
using namespace std;

namespace FirstNamespace {
    int a;
    void show(){
        cout << " first namespace fun";
    }
    class Namespace{

    };
}

namespace SecondNamespace {
    int a;
    void show(){
        cout << " sec namespace fun";
    }
    class Namespace{

    };
}

using namespace FirstNamespace;

int main(){
    show();
    SecondNamespace::show();
    return 0;
}