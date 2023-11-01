#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string findOdd(int n,string series[])
{
    vector<vector<int>> diffs;
    vector<int> v;
    string word;
    string str;
    for(int i=0;i<n;i++)
    {
        int len;
        len = series[i].length();
        str = series[i];
        for(int j=1;j<len;j++)
        {
            int diff = str[j-1]-str[j];
            v.push_back(diff);
        }
        diffs.push_back(v);
        v.clear();
    }
    
    for(int i=0;i<n;i++)
    {
        if(count(diffs.begin(),diffs.end(),diffs[i])==1)
        {
            word=series[i];
            break;
        }
    }
    return word;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    string series[n];
    cout<<"Enter the elemtents of string array: ";
    for(int i=0;i<n;i++)
    {
        cin>>series[i];
    }
    
    cout<<findOdd(n,series);
    return 0;
}
