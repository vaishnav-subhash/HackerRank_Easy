#include <iostream>
#include <vector>
#include <set>
#include <cstring>
using namespace std;

vector<long int> maxMin(int n, string operations[], int m, long int x[])
{
    multiset<long int> elements;
    vector<long int> result;
    for(int i=0;i<n;i++)
    {
        long int min=0,max=0;
        if(operations[i]=="push")
        {
            elements.insert(x[i]);
        }
        else
        {
            elements.erase(x[i]);
        }
        min=*elements.begin();
        max=*elements.rbegin();
        result.push_back(min*max);
    }
    return result;
}

int main()
{
    int n,m;
    cout<<"Enter the number of string operations: ";
    cin>>n;
    string operations[n];
    cout<<"Enter the operation strings: ";
    for(int i=0;i<n;i++)
    {
        cin>>operations[i];
    }
    cout<<"Enter the number of elements in array x: ";
    cin>>m;
    long int x[m];
    cout<<"Enter the elements of array x: ";
    for(int i=0;i<m;i++)
    {
        cin>>x[i];
    }
    vector<long int> res;
    res=maxMin(n,operations,m,x);
    for(auto i : res)
    {
        cout<<i<<endl;
    }
    return 0;
}
