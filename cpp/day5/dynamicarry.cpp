//  #include<iostream>
//  using namespace std;
//  class student
//  {
//     int i;
//     int avg;
//     //int sum=1;
//     int mark[5];
//     public:
//     int acceptdeta();
//     void display();

//  };
//  int student::acceptdeta()
//  {
//     int sum=0;
    
//     cout<<"enter marks";
//     for ( i = 1; i <=5; i++)
//     {     //sum=sum+mark;
//          cin>>mark[i];
//     }
//     for ( i = 1; i <=5; i++)
//     {
//         sum=sum+mark[i];
        

//     }
//     avg=sum/5;
//     cout<<"the avg is "<<avg<<endl;
   

//  }
// // void student::display()
// //{
//     //cout<<avg;
// // }
//  int main()
//  {
//     int n,i;
//    cout<<"enter number of student";
//    cin>>n;
//    student * ptr=new student[n];
//    for ( i = 1; i <= n; i++)
//    {
//     ptr[i].acceptdeta();
   
//    }
// // for ( i = 1; i <=5; i++)
// // {
// //  ptr[i].display();
// //   }
   
   
//  }

#include <iostream>
using namespace std;
int main() {

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  float* ptr;
    
  // memory allocation of num number of floats
  ptr = new float[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << ptr[i] << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}
