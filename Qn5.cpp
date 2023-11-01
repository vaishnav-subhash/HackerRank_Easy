#include <iostream>
#include <string>
using namespace std;

int compareStrings(string str1, string str2)
{
    string temp1,temp2;
    int len1=str1.length(),len2=str2.length();
    
    for(int i=0;i<len1;i++)
    {
        if(str1[i+1]=='#')
        {
            str1.erase(i,2);
           // cout<<"str1: "<<str1;
            len1-=2;
            i-=2;
        }
    }
    
    for(int i=0;i<len2;i++)
    {
        if(str2[i+1]=='#')
        {
            str2.erase(i,2);
          //  cout<<"str2: "<<str2;
            len2-=2;
            i-=2;
        }
    }
    int flag=0;
    if(str1.length()==str2.length())
    {
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]==str2[i])
            {
                flag=1;
            }
            else
            flag=0;
        }
    }
    return flag;
}

int main()
{
    string s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    cout<<compareStrings(s1,s2);
    return 0;
}
