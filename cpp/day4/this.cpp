// #include <iostream>  
// using namespace std; 
// class Demo
// {
// 	int a,b;
// 	public:
// 		Demo(int p,int q)
// 		{
// 			cout<<"address stored in this "<<this<<endl;
// 			this->a=p;//compiler implicitly add this-> before attribute.
// 			this->b=q;
// 		}
// 		void display()
// 		{
// 			cout<<a;
// 			cout<<b;
// 		}
// };
// int main()
// {
// 	Demo d(10,20);
// 	cout<<"address of d obj "<<&d<<endl;
// }
#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
	void show();
	date(int,int,int);
	date();
};
date::date()
{
	this->dd=this->mm=this->yy=0;
}
 date::date(int dd,int mm,int yy)
{
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
}
 void date::show()
 {
	 cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
 };
 int main()
{
	date d1(1,1,1);
	d1.show();
	date d2(2,2,2);
	d2.show();
}