#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int powerArray(int n, vector<int> arr)
{
    int p1,p2;
    for(int i=0;i<n-1;i++)
    {
        p1=pow(arr[i],arr[i+1]);
        p2=pow(10,9)+7;
        arr[i] = p1%p2;
    }

    int m=*max_element(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==m)
        {
            return i+1;
        }
    }
}

int main()
{
    int n,m,num;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    
    cout<<powerArray(n,arr);
    return 0;
}

