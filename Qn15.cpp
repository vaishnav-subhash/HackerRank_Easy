#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long int pthFactor(long int n ,long int p)
{
    vector<int> fact;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fact.push_back(i);
        }
    }
    
    if(p<=fact.size())
    return fact.at(p-1);
    else
    return 0;
}
    

int main()
{
    string str;
    int num,p;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the value of pFactor: ";
    cin>>p;
    cout<<pthFactor(num,p);
}
