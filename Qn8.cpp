#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void groupDivision(int n, vector<int> marks, int maxSpread)
{
    int result=1;
    sort(marks.begin(),marks.end());
    int temp = maxSpread+marks[0];
    for(int i=1;i<marks.size();i++)
    {
        if(marks[i]>temp)
        {
            result++;
            temp=marks[i]+maxSpread;
        }
    }
    cout<< result;
    
}

int main()
{
    int n,maxSpread,elem;
    cout<<"Enter the number of students: ";
    cin>>n;
    
    vector<int> marks;
    cout<<"Enter the students: ";
    for(int i=0;i<n;i++)
    {
        cin>>elem;
        marks.push_back(elem);
    }
    
    cout<<"Enter the value of maxSpread: ";
    cin>>maxSpread;
    
    groupDivision(n,marks,maxSpread);
    return 0;
}

