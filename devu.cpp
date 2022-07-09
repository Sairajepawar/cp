#include<iostream>
#include<climits>
int amax(int a[1000],int max,int size);
int amin(int a[1000],int min,int size);
using namespace std;
int main()
{
    int s1,s2;
    cin>>s1>>s2;
    int a1[1000];
    int a2[1000];
    //let consider first array to be of devu
    int min1=INT_MAX;
    for(int i=0;i<s1;i++)
    {
        cin>>a1[i];
    }
    int max2=INT_MIN;
    for(int i=0;i<s2;i++)
    {
        cin>>a2[i];
    }
    for(int i=0;i<s1;i++)
    {
        if(min1>a1[i])
        {
            min1=a1[i];
        }
    }
    for(int i=0;i<s2;i++)
    {
        if(max2<a2[i])
        {
            max2=a2[i];
        }
    }
    int count=0;
    if (max2<min1)
    {
        cout<<count;
        goto label;
    }
    
    label1:
    if(min1==max2)
    {
        cout<<count;
        goto label;
    }
    else
    {
        if(amax(a2,max2,s2)<=amin(a1,min1,s1))
        {
            max2--;
            count++;
            for (int i = 0; i < s2; i++)
            {
                if(a2[i]>max2)
                {
                    cout<<"From devu's brother:- "<<a2[i]<<endl;
                    a2[i]--;
                    count++;
                }
                else if (a2[i]==max2)
                {
                    continue;
                }
                else
                {
                    continue;
                }
            }
            count--;
            if(max2==min1)
            {
                cout<<count;
                goto label;
            }
            else
            {
                min1++;
                count++;
                for(int j=0;j<s1;j++)
                {
                    if(a1[j]<min1)
                    {
                        cout<<"From devu:- "<<a1[j]<<endl;
                        a1[j]++;
                        count++;
                    }
                    else if(a1[j]==min1)
                    {
                        continue;
                    }
                    else
                    {
                        continue;
                    }
                }
                count--;
                goto label1;
            }
        }
        else
        {
            min1++;
            count++;
            for(int j=0;j<s1;j++)
            {
                if(a1[j]<min1)
                {
                    cout<<"From devu:- "<<a1[j]<<endl;
                    a1[j]++;
                    count++;
                }
                else if(a1[j]==min1)
                    {
                        continue;
                    }
                    else
                    {
                        continue;
                    }
            }    
            count--;
            if(max2==min1)
            {
                cout<<count;
                goto label;
            }
            else
            {
                max2--;
                count++;
                for (int i = 0; i < s2; i++)
                {
                    if(a2[i]>max2)
                    {
                        cout<<"From devu's brother:- "<<a2[i]<<endl;
                        a2[i]--;
                        count++;
                    }
                    else if (a2[i]==max2)
                    {
                        continue;
                    }
                    else
                    {
                        continue;
                    }
                }
                count--;
                goto label1;                
            }        
        }
        
    }
    label:
    return 0;
}
int amax(int a[1000],int max,int size)
{
    
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            flag++;
        }
    }
    return flag;
}
int amin(int a[1000],int min,int size)
{
    
    int flag=0;
    for (int i = 0; i <size; i++)
    {
        if (a[i]<min)
        {
            flag++;
        }
        return flag;
    }
    
}
