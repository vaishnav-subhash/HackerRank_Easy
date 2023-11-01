#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minPartitions(vector<int> used,vector<int> totalCap,int n, int m)
{
    sort(totalCap.begin(),totalCap.end(),greater<int>());
    int count=0,totalUsed=0,capacity=0;
    for(auto j : used)
    {
        totalUsed += j;
    }
    
    for(int i=0;i<n;i++)
    {
        capacity += totalCap[i];
        count++;
        if(capacity>=totalUsed)
        {
            break;
        }
    }
    return count;
}

int main()
{
    int n,m,num;
    cin>>n;
    vector<int> used;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        used.push_back(num);
    }
    cin>>m;
    vector<int> totalCap;
    for(int i=0;i<m;i++)
    {
        cin>>num;
        totalCap.push_back(num);
    }
    
    cout<<minPartitions(used,totalCap,n,m);
    return 0;
}

