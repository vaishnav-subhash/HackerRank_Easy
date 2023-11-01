#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int* coprimeCount(int A[],int n)
{
    int count;
    int* result = new int;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=1;j<=A[i];j++)
        {
            if(__gcd(j,A[i])==1)
            {
                count++;
            }
        }
        result[i]=count;
    }
    
    return result;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int A[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int* res=coprimeCount(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
