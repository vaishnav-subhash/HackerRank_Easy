#include<iostream>
using namespace std;

int playSegments(int array[], int length)
{
    int c;
    cout<<"\n\n";
    cout<<"p1\tp2\n";
    for(int i=0;i<length;i++)
    {
        int p1=0,p2=0;
        for(int j=0;j<i;j++)
        {
            if(array[j]==1)
            {
                p1++;
            }
            else
            {
                p1--;
            }
        }
        cout<<p1<<"\t";
        
        for(int j=i;j<length;j++)
        {
            if(array[j]==1)
            {
                p2++;
            }
            else
            {
                p2--;
            }
        }
        cout<<p2<<"\n";
    if(p1>p2)
        {
            return i;
            break;
        }
        
        
    }
   // return c;
}

int main()
{
    int len;
    cout<<"Enter the number of elements: ";
    cin>>len;
    int a[len];
    cout<<"Enter the array elements: ";
    for(int i=0;i<len;i++)
    {
        cin>>a[i];
    }
    int c;
    c = playSegments(a,len);
    cout<<"\n"<<c;
};