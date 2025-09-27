#include<iostream>
using namespace std;
 class Employee
 {
    public:
    int id;
    char name[10];
      void get();
      void set();
      int get_id();

 };
  void Employee::get()
  {
    cout<<"enter id";
    cin>>id;
    cout<<"enter name";
    cin>>name;
  }
   void Employee::set()
  {
    cout<<"employee id "<<id <<endl;
    //cin>>id;
    cout<<"employee name "<<name<<endl;
    //cin>>name;
  }
  int Employee::get_id()
  {
    return id;

  }
 int main()
 {
    int n;
    cout<<"enter number of employee";
    cin>>n;
    Employee e[30];
    for(int i=0;i<n;i++)
    {
        e[i].get();
    
    }
    //for(int i=1;i<=n;i++)
   // {
       // e[i].set();
   // }
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
if (e[j].get_id()>e[j+1].get_id  ())
{
  Employee temp=e[j] ;
        e[j]=e[j+1];
        e[j+1]=temp;
}

      }
   
    



    }
    for(int i=0;i<n;i++)
    {
        e[i].set();
    }
    


 return 0;
 }