#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows:- ";
    cin>>r;
    cout<<"Enter the number of columns:- ";
    cin>>c;
    int a[r][c];
    int b[r][c];
    int d[r][c]; 
    cout<<"Enter the first matrix:- "<<endl;   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the second matrix:- "<<endl;   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int sum=0;
            int l=0;
            for (int k = 0; k < r; k++)
            {
                sum+=a[i][l]*b[k][j];
                l++;
            }
            d[i][j]=sum;      
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
