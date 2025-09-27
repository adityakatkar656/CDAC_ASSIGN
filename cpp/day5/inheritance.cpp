// //single layer inheritance
// #include<iostream>
// using namespace std;
//   class  a
//   {
//     int v=10;
//     public:
//    void display();
//   };
//   void a::display()
//   {
//     cout<<v<<endl;

//   }
//   class b : public a
//   {
//     int c=56;
//     public:
//    void display();  
// };
// void b::display()
// {
//     a::display();
//     cout<<c<<endl;
// }
// int main()
// {
//     b f;
//     f.display();
// }
// /multilevael inheritance


  //single layer inheritance
#include<iostream>
using namespace std;
  
  class  employee
  { 
    int id;
   public:
    employee(int id);
  
  };
  employee::employee(int i)
  {
      id=i;
    cout<<"the employee id  "<<id<<endl;
  }
  //void employee::display()
  //{
    //cout<<v<<endl;

  //}
  class wegemployee : public employee
  {  
    int reat,hrs;
  public:
   wegemployee(int a,int b,int c);  
};
wegemployee::wegemployee(int a,int b,int c):employee( a)
{
     reat=b;
    hrs=c;
    cout<<"the reat is   "<<reat<<" the  hrs is  "<<hrs<<endl;
    cout<<"wegemploye salary is "<<reat*hrs<<endl;
}
class salesman: public wegemployee
{
  
  int sales,camition;
  public:
  salesman(int a,int b,int c,int d,int f);
};
salesman::salesman(int a,int b,int c,int d,int f) : wegemployee( a, b,c)
{
  sales=d;
  camition=f;
  cout<<"the sales is  "<<sales<<"the camition is  "<<camition<<endl;
  cout<<"the payment of sales man is  "<<sales+camition<<endl;
}
int main()
{
  salesman m(101,1000,4,9090,990);
}







  