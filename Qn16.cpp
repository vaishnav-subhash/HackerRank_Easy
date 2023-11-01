#include <iostream>
#include<unordered_map>
using namespace std;

int getMinimumMoves(string str)
{
    int count=0;
    unordered_map<char,int> str_map;
    
    for(char c: str)
    {
        str_map[c]+=1;
    }
    
    for(auto c: str_map)
    {
        if(c.second>1)
        {
            count += c.second/2;
        }
    }
    return count;
}

int main()
{
    string word;
    cin>>word;
    cout<<getMinimumMoves(word);
    return 0;
}
