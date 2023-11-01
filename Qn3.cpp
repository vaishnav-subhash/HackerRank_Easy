#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

void hasVowels(string strArr[], string query[],int n,int q)
{
    int len1,len2,num1,num2;
    char ch;
    
    for(int i=0;i<q;i++)
    {
        int count=0;
        
        stringstream ss(query[i]);
        ss>>num1>>ch>>num2;
        
        for(int j=num1-1;j<num2;j++)
        {
            string str = strArr[j];
               
            
            if((str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u') && (str[str.length()-1]=='a'||str[str.length()-1]=='e'||str[str.length()-1]=='i'||str[str.length()-1]=='o'||str[str.length()-1]=='u'))
                {
                    count+=1;
                }
        
        }
        cout<<count<<endl;
    }
}

int main()
{
    int n,q;
    cout<<"Enter the number of strings: ";
    cin>>n;
    
    string strArr[n];
    cout<<"Enter the elements of the string array: ";
    for(int i=0;i<n;i++)
    {
        cin>>strArr[i];
    }
    cout<<"Enter the number of queries: ";
    cin>>q;
    string query[q];
    cout<<"Enter the queries: ";
    for(int i=0;i<q;i++)
    {
        cin>>query[i];
    }
    hasVowels(strArr,query,n,q);
    return 0;
}
