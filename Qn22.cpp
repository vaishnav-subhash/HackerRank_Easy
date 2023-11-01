#include <iostream>

using namespace std;

int dominatingXorPairs(int n, int arr[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x,a;
            x = arr[i] ^ arr[j];
            a = arr[i] & arr[j];
            if(x>a)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<dominatingXorPairs(n,arr);
    return 0;
}
