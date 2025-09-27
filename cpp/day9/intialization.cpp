#include<iostream>
using namespace std;
#include<string.h>
class base
{
    public:
    char*ptr;
    public:
  int a;
  int len;
 base()
 {
  ptr=new char;
   a = 50;
   strcpy(ptr,"KATKAR");
  }
  ~base()
  {
    cout<<"distroctor is call"<<endl;
    if(ptr){
        delete[]ptr;
        ptr=NULL;
    }
}

 base(char* ch){
      ptr = new char;
      strcpy(ptr,ch);
      // cout << &ptr << endl;

 }
 base(int i)
 {
     len = i;
     ptr = new char[len];
     cout << "enter string";
     cin >> ptr;
     cout << ptr << endl;
     cout << "call" << endl;
     cout << &ptr << endl;
 }


};
int main(){
   base b;
   cout << b.a << endl;
  cout << b.ptr << endl;

   base b1("Aditya");
  //cout << b1.ptr << endl; 


   base b2(10);

   cout << b2.ptr << endl;
    return 0;
}


// #include<iostream>
// using namespace std;
// #include<string.h>
// class base
// {
//     char*ptr;
//     public:
//     int i;

// base(){
// ptr= new char;
// strcpy(ptr,"aditya");
// }
// base( char* s)
// {

// }
// };
