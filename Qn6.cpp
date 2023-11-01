#include <iostream>
#include <string>
using namespace std;

string simpleCipher(string str, int num)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
       {
            for(int K=0;K<num;K++)
            {
                if(str[i]==65)
                {
                    str[i]=90;
                }
                else
                {
                    str[i]=str[i]-1;
                }
            }
       }
    }
    return str;
}

int main()
{
    string str;
    int k;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"Enter the value of \'k\': ";
    cin>>k;
    cout<<simpleCipher(str,k);
    return 0;
}
