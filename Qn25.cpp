#include <iostream>
#include<string>
using namespace std;

string palindromeStr(string str){
    int i,imax=0,num,temp=0,j=0;
    string arr;
    for(i=0;i<str.size();i++){
        num = str[i];
        if(imax<num){
            imax = num;
            temp = i;
            arr[j] = str[i];
            j++;
        }
    }
    
    if(temp == (str.size()/2))
    {
        temp = j-2;
    }
    str[temp] ='a';
    return str;
}
int main()
{
    string str;
    int flag=1;
    cout<<"Enter string : ";
    cin>>str;
    string str1;
    str1=palindromeStr(str);
    if(str==str1)
    cout<<"IMPOSSIBLE";
    else
    cout<<str1;  
    return 0;
}