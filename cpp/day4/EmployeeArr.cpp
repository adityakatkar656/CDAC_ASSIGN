#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    char name[25];

    void GetData();
    void setData();

};

void Employee::setData(){
    cout << "enter id ";
    cin >> id;
    cout << "enter name ";
    cin >> name;                 

};      
void Employee::GetData(){
    cout << id;
    cout << name << " " << endl;
}                                      

int main(){
    Employee e[10];
    int i,n;

    cout <<"enter no of employee";
    cin >> n;

    for(int i=0; i<n;i++){
        e[i].setData();
    }
    for(int i=0; i<n;i++){
        e[i].GetData();
    }
    return 0;
}