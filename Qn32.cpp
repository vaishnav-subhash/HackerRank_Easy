#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int minCost(int initR,int initC,int finalR,int finalC,vector<int> costRows,vector<int> costCols)
{
    int total=0;
    for(int i=min(initR,finalR);i<max(initR,finalR);i++)
    {
        total+=costRows[i];
    }
    
    for(int i=min(initC,finalC);i<max(initC,finalC);i++)
    {
        total+=costCols[i];
    }
    
    return total;
}

int main()
{
    int rows,cols,initR,initC,finalR,finalC,n,m,num;
    cin>>rows>>cols>>initR>>initC>>finalR>>finalC;
    cin>>n;
    vector<int> costRows,costCols;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        costRows.push_back(num);
    }
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        costCols.push_back(num);
    }
    
    cout<<minCost(initR,initC,finalR,finalC,costRows,costCols);
    return 0;
}

