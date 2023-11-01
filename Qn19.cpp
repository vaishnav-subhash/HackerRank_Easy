#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int* getFinalData(int* data ,int updates[][2],int n, int k)
{
    for(int i=0;i<k;i++)
    {
        int upper,lower;
        upper = updates[i][0]-1;
        lower = updates[i][1]-1;
        
        for(int j=upper;j<=lower;j++)
        {
            data[j]=-data[j];
        }
    }
    return data;
}
    

int main()
{
    int n,k,col;
    cout<<"Enter the number of data elements: ";
    cin>>n;
    int data[n];
    cout<<"Enter the number: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"Enter the number of update queries: ";
    cin>>k;
    int updates [k][2];
    cout<<"Enter the value of queries: ";
    for(int i=0;i<k;i++)
    {
        cin>>updates[i][0];
        cin>>updates[i][1];
    }
   int* result=getFinalData(data,updates,n,k);
   for(int i=0;i<n;i++)
    {
        cout<<result[i];
    }
    return 0;
}
