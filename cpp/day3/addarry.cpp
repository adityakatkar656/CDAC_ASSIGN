#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of row and colums";
    cin>>n>>m;
    int a[n][m],b[n][m],c[n][m];
    cout<<"enter the first arry a";
    for ( int i = 0; i <n; i++)

    {
        for ( int j= 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    };
     cout<<"enter the second arry b";
    for ( int i = 0; i <n; i++)

    {
        for ( int j= 0; j < m; j++)
        {
            cin>>b[i][j];
        }
    }
     for ( int i = 0; i <n; i++)

    {
        for ( int j= 0; j < m; j++)
        {
           c[i][j]={ a[i][j]+b[i][j]
            };
    };
};
    for ( int i = 0; i <n; i++)

    {
    for ( int j= 0; j < m; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }

}


































































