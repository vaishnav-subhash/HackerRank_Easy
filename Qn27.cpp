#include <iostream>
#include <set>
using namespace std;

void getMaximumDistinctCount(int n, int a[], int b[], int k)
{
    set<int> s1;
    set<int> s2;
    int counter=0;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        s1.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        s2.insert(b[i]);
    }
    if(n==s1.size())
    {
        cout<<k;
    }
    else
    {
        for(auto i : s2)
        {
            if(s1.find(i)==s1.end())
            {
                counter++;
            }
        }
        if(counter<k)
        {
            cout<<counter+s1.size();
        }
        else
        cout<<k+s1.size();
    }
}

int main()
{
    int n,k;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cin>>k;
    getMaximumDistinctCount(n,a,b,k);
    return 0;
}
