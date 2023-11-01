#include <iostream>
#include <vector>
using namespace std;
int closedPaths(int num)
{
    vector<int> v;
    int rem,quo,count=0;
    while(num!=0)
    {
        quo = num %10;
        num=num/10;
         if(quo==0 || quo==4 || quo==6 || quo==9)
        {
            count+=1;
        }
        else if(quo==8){
            count+=2;
        }
    }
    return count;
}

int main()
{
    int num;
    cout<<"Enter the input: ";
    cin>>num;
    
   cout<<closedPaths(num);

    return 0;
}
