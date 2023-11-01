#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countSubstrings(string input_str)
{
    int counter=0;
    string sub;
    for(int i=0;i<input_str.length();i++)
    {
        for(int j=1;j<=input_str.length()-i;j++)
        {
            sub = input_str.substr(i,j);
            if(sub.length()==1)
            {
                counter++;
                continue;
            }
            else
            {
                int sum=0;
                for(int i=0;i<sub.length();i++)
                {
                    sum+=(sub[i]-96)/3;
                }
                if(sum%sub.length()==0)
                {
                    counter++;
                }
            }
        }
    }
    return counter;
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<countSubstrings(str);
    return 0;
}
