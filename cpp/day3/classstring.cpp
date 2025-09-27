#include<iostream>
using namespace std;
#include<string.h>
class Student{
int rollno;
char name[20];

public: 
 Student()
{
     rollno=101;
     strcpy(name,"katkar");

}
Student(int i, char*ptr)
{
    rollno=i;
    strcpy(name,ptr);
}   
void display()
{
    cout<<rollno;
    cout<<name;
}
};
int main()
{
   Student s1;
  s1.display();
    char str3[] = "aditya";
    Student s2(102,str3);
    s2.display();
}