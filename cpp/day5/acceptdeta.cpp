// // #include<iostream>
// // using namespace std;
// // class student
// // {
// //     public:
// //     int roll_num,dob,marks;
// //     void getdeta();
// //     void puddeta();
// //     int accses();
// // };
// // void student::getdeta()
// // {
// //     cout<<"enter roll number :"<<endl;
// //     cin>>roll_num;
// //     cout<<"enter marks : "<<endl;
// //     cin>>marks;
// //     cout<<"enter DOB : "<<endl;
// //     cin>>dob;
// // }
// // void student:: puddeta()
// // {
// //     cout<<roll_num<<endl;
// //     cout<<marks<<endl;
// //     cout<<dob<<endl;
// // }
// // int student::accses()
// // {
// //     return marks;
// // }
// // int main()
// // { int n;
// //     cout<<"enter number of student"<<endl;
// //     cin>>n;
// //     student obj1[n];
// //      for (int i = 0; i <= n; i++)
// //      {
// //         obj1[i].getdeta();
// //      }
// //      for (int i =0;i<=n-1;i++)
// //      {
// //        for (int j = 0; j <= n-i-1; i++)
// //        {
// //          if(obj1[i].accses()>obj1[i+1].accses())
// //             student temp =
// //        }
       
       
// //      }
         
// // }
// #include <bits/stdc++.h>
// using namespace std;

// class Base {
// public:

//     // Virtual function
//     virtual void display() {
//         cout << "Base class function";
//     }
// };

// class Derived : public Base {
// public:

//     // Overriding the base class function
//     void display() override {
        
//         cout << "Derived class function";
//     }
// };

// int main() {
    
//     // Creating a pointer of type Base
//     Base* basePtr;
    
//     // Creating an object of Derived class
//     Derived derivedObj;

//     // Pointing base class pointer to 
//     // derived class object
//     basePtr = &derivedObj;
    
//     // Calling the display function 
//     // using base class pointer
//     basePtr->display();
//     return 0;
#include <iostream>
using namespace std;
class employee
{
	int id;
public:
	employee();
	employee(int);
     void display();
	 virtual int findsalary()
	{
		return 0;
	}
};
employee::employee()
{
	cout<<"in default of emp\n";
	id=0;
}
employee::employee(int i)
{
	cout<<"in para of emp\n";
	id=i;
}
void employee::display()
{
	
	cout<<"id of an emp is "<<id<<endl;
}

class wageemployee:public employee
{
	int hrs,rate;
public:
	wageemployee();
	wageemployee(int,int,int);
	 void display();
     int findsalary();

};
wageemployee::wageemployee()
{
	cout<<"in default of wage\n";
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i,int h,int r)	:employee(i)
{
	cout<<"in para of wage\n";
	hrs=h;
	rate=r;
}

void wageemployee::display()
{
	employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
int  wageemployee::findsalary()
{
    return hrs*rate;
}

int main()
{
	employee * ptr=new wageemployee(101,5,500);
    cout <<endl;
	cout<<"salary is "<<ptr->findsalary();//without virtual keyword binding takes
	//at compile time and at compile time type of pointer is checked rather than type 
	//of object.depending on type of object,function of that class will be 
	//executed
	//ptr->display();
}