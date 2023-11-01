#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

long int getMinimumCost(int n, int arr[])
{
    vector<int> v;
    vector <int>::iterator itr;
    int max=0,num1,num2;
    for(int i=1;i<n;i++)
    {
        int sub;
        sub=abs(arr[i-1]-arr[i]);
        if(max<sub)
        {
            num1=arr[i-1];
            num2=arr[i];
            max=sub;
        }
    }
    int elem,temp;
    temp=min(num1,num2);
    elem = (max/2)+temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num1)
        {
            v.push_back(arr[i]);
            v.push_back(elem);
        }
        else
        {
            v.push_back(arr[i]);
        }
    }
    long int sum=0;
    for(int i =0;i<v.size()-1;i++)
    {
        sum += pow((v[i]-v[i+1]),2);
    }
     return sum;
}

int main()
{
    int n;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<getMinimumCost(n,arr);
}
