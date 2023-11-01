#include<iostream>
#include <vector>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

void twins(string firstString[], string secondString[], int n)
{
    string result[n];
    for(int i=0;i<n;i++)
    {
        string str1,str2;
        str1=firstString[i];
        str2=secondString[i];
        if(str1.length()==str2.length())
        {
            vector<char> e1,e2,o1,o2;
            for(int j=0;j<str1.length();j++)
            {
                char elem1 = str1[j];
                if(j%2==0)
                {
                    e1.push_back(elem1);
                }
                else
                o1.push_back(elem1);
            }
            
            for(int j=0;j<str2.length();j++)
            {
                char elem2 = str2[j];
                if(j%2==0)
                {
                    e2.push_back(elem2);
                }
                else
                o2.push_back(elem2);
            }
            
            sort(e1.begin(),e1.end());
            // cout<<"e1: ";
            // for(int i=0;i<e1.size();i++)
            // {
            //     cout<<e1[i]<<endl;
            // }
            sort(o1.begin(),o1.end());
            // cout<<"o1: ";
            // for(int i=0;i<o1.size();i++)
            // {
            //     cout<<o1[i]<<endl;
            // }
            sort(e2.begin(),e2.end());
            // cout<<"e2: ";
            // for(int i=0;i<e2.size();i++)
            // {
            //     cout<<e2[i]<<endl;
            // }
            sort(o2.begin(),o2.end());
            // cout<<"o2: ";
            // for(int i=0;i<o2.size();i++)
            // {
            //     cout<<o2[i]<<endl;
            // }
            
            if(e1==e2 && o1==o2)
            {
                result[i]="Yes";
            }
            else
            result[i]="No";
        }
        else
        {
            result[i]="No";
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;
    string firstString[n],secondString[n];
    cout<<"Enter the elements of first string: ";
    for(int i=0;i<n;i++)
    {
        cin>>firstString[i];
    }
    cout<<"Enter the elements of second string: ";
    for(int i=0;i<n;i++)
    {
        cin>>secondString[i];
    }
    twins(firstString,secondString,n);
}
