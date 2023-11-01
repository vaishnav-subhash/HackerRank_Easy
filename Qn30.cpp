#include <iostream>

using namespace std;

void getMinimumOperationCount(string str)
{
    int diff,count=0;
    for(int i=1;i<=str.length();i++)
    {
        diff = abs(str[i-1]-str[i]);
        if(diff==0 || diff==1)
        {
            str[i]=str[i]+2;
            count++;
            i++;
        }
    }
    
    cout<<count;
}

int main()
{
    string str;
    cin>>str;
    
    getMinimumOperationCount(str);
}