#include<iostream>
using namespace std;
#include<string.h>
void transpos_strcpy(char* str1,char* str){
     while(*str != '\0'){
           *str1 = *str;
           str++;
           str1++;
     }
     *str1 = '\0';
}
void user_concat(char* str1,char* str){
     while (*str1!='\0')
     {
        str1++;
     }
     while (*str!='\0')
     {
        *str1=*str;
        str1++;
        str++;
     }
     
     
}
int main()
{
    char str[20],str1[30];
    cout<<"enter string";
    cin>>str;
    
    transpos_strcpy(str1,str);
    cout << str1;
    user_concat(str1,str);
    cout<<str1;
}