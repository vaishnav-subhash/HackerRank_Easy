/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

long getSequenceSum(int a, int b, int c)
{
    int result;
    result = a;
    do
    {
        a++;
        result +=a;
    }while(a!=b);
    
    do
    {
        b--;
        result += b;
    }while(b!=c); 
    
    return result;
}

int main()
{
    int a,b,c;
    cout<<"Enter the value of i:";
    cin>>a;
    cout<<"Enter the value of j:";
    cin>>b;
    cout<<"Enter the value of k:";
    cin>>c;
    
    cout<<getSequenceSum(a,b,c);
}
