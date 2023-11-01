#include <iostream>
using namespace std;

void getUniqueCharacter(string str) 
{
    int flag=0;
    int pos=-1;
    for(int i=0;i<str.length();i++)
    {
        for(int j=0;j<str.length();j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                if(str[i]==str[j])
                {
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            pos=i+1;
            break;
        }
        flag=0;
    }
    cout<<pos;
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    
    getUniqueCharacter(str);

    return 0;
}
