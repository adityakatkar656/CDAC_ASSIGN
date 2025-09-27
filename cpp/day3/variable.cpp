#include<iostream>
using namespace std;

int rollno = 1;
 static int age = 20;

void show(){
    
    cout << rollno << endl;
    rollno++;
    age++;
    cout << age << endl;
    //  static int rollno = 9;
    cout << rollno << endl;
    rollno++;
}

int main(){
    show();
    show();
    show();
    cout << rollno;
  return 0;
}