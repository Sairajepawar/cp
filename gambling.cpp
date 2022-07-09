#include<iostream>
using namespace std;
int fre(long long int a[1000],int size,int index);
int maxfre(long long int a[100],int size);
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int size;
        cin>>size;
        long long int a[1000];
        for (int j=0;j<size;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<size;j++)
        {
            if(fre(a,size,j)==maxfre(a,size))
            {
                cout<<a[j]<<" "<<j+1<<" ";
                break;
            }
        }
        int last;
        for(int j=0;j<size;j++)
        {
            if(fre(a,size,j)==maxfre(a,size))
            {
                last=j;
            }
        }
        cout<<last+1<<endl;
    }
    return 0;
}
int fre(long long int a[1000],int size,int index)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[index])
        {
            count++;
        }
    }
    return count;
}
int maxfre(long long int a[100],int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(max<fre(a,size,i))
        {
            max=fre(a,size,i);
        }
    }
    return max;
}
