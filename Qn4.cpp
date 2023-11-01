#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string winnerName(char erica[],char bob[],int day)
{
    string result;
    int esum=0,bsum=0;
    for(int i=0;i<day;i++)
    {
        if(erica[i]=='E' || erica[i]=='e')
        {
            esum+=1;
        }else if(erica[i]=='M' || erica[i]=='m')
        {
            esum+=3;
        }else if(erica[i]=='H' || erica[i]=='h')
        {
            esum+=5;
        }
        
        if(bob[i]=='E' || bob[i]=='e')
        {
            bsum+=1;
        }else if(bob[i]=='M' || bob[i]=='m')
        {
            bsum+=3;
        }else if(bob[i]=='H' || bob[i]=='h')
        {
            bsum+=5;
        }
    }
    
    if(esum>bsum)
    {
        result="ERICA";
    }else if(bsum>esum)
    {
        result="BOB";
    }
    else
    {
        result="TIE";
    }
    return result;
}


int main() 
{
    int day,esum=0,bsum=0;
    cout<<"Enter the number of days: ";
    cin>>day;
    
    char erica[day],bob[day];
    
    for(int i=0;i<day;i++)
    {
        cout<<"Enter the level of day "<<i+1<<" for ERICA:";
        cin>>erica[i];
        cout<<"Enter the level of day "<<i+1<<" for BOB:";
        cin>>bob[i];
    }
    cout<<winnerName(erica,bob,day);
}
