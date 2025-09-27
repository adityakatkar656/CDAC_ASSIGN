#include<iostream>
using namespace std;
enum Day{sunday='A',monday,tuesday='D',wednesday,thursday,friday,saturday
};
int main() 
{ 
    enum Day today;
    today=wednesday;
  	cout<<today;
    switch (today) { 
    case 65: 
        cout << "it is sunday"; 
        break; 
    case 66: 
        cout << "it is monday"; 
        break; 
}
}
