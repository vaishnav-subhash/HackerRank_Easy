#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n,tasks;
    cout<<"Enter the number of processors: ";
    cin>>n;
    
    int processorTime[n];
    cout<<"Enter the processor times: ";
    for(int i=0;i<n;i++)
    {
        cin>>processorTime[i];
    }
    
    cout<<"Enter the number of tasks: ";
    cin>>tasks;
    
    int taskTime[tasks];
    for(int i=0;i<tasks;i++)
    {
        cin>>taskTime[i];
    }
    
    sort(processorTime,processorTime+n);
    sort(taskTime,taskTime+tasks,greater<int>());
    
    
    int max = 0;
    for(int i=0;i<n;i++)
    {
        int val= taskTime[i*4] + processorTime[i];
        if(max < val)
        {
            max=val;
        }
    }
    
    cout<<max;
    return 0;
}
