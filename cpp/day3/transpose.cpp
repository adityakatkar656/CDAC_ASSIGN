#include<iostream>
using namespace  std;
int main()
{
    int n,m;
    cout<<"enter number of row coulmn";
      cin>>n>>m;
      int a[n][m],b[n][m];
      cout<<"enter matrix  of a";
      for (int i = 0; i <n; i++)
      {
        for (int j = 0; j<m; j++)
        {
            cin>>a[i][j];
        }
        
      }
      for (int i = 0; i <n; i++)
      {
        for (int j = 0; j <m; j++)
        {
            b[i][j]=a[j][i];
        }
        
      }
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j <m; i++)
        {
            cout<<b[i][j];
        }
        
      }
      
}