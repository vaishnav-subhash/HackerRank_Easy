#include <iostream>
#include <algorithm>
using namespace std;

string getSubstring(string input_str, int k)
{
    string temp=input_str;
    string str;
    for(int i=0;i<input_str.length();i++)
    {
        for(int j=k;j<=input_str.length()-i;j++)
        {
            str=input_str.substr(i,j);
            if(count(str.begin(),str.end(),'1')==k)
            {
                if(str.length()<temp.length())
                {
                    temp=str;
                }
                else if(str.length()==temp.length())
                {
                    if(str<temp)
                    {
                      temp=str;  
                    }
                }
            }
        }
    }
    return temp;
}
    

int main()
{
    string str;
    int k;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<getSubstring(str,k);
}
