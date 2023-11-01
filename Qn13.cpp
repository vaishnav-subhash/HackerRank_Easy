#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinimumOperations(string binaryStr)
{
    int counter=0;
    for(int i=1;i<binaryStr.length();i++)
    {
        if(binaryStr[i-1]=='1'&&binaryStr[i]=='1')
        {
            binaryStr[i-1]='0';
            binaryStr[i]='0';
            counter++;
        }
        
    }
    
    for(int i=1;i<binaryStr.length();i++)
    {
        if(binaryStr[i-1]!=binaryStr[i])
        {
            binaryStr[i-1]='0';
            binaryStr[i]='0';
            counter+=2; 
        }
    }
    return counter;
}

int main()
{
    string binaryStr;
    cout<<"Enter the binary string: ";
    cin>>binaryStr;
    cout<<getMinimumOperations(binaryStr);
    return 0;
}
