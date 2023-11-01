#include <iostream>
#include <string>
using namespace std;

void getLargestNumber(string num)
{
    for(int i=1;i<num.length();i++)
    {
        if((num[i-1]%2==0 && num[i]%2==0)||(num[i-1]%2==1 && num[i]%2==1))
        {
            if(num[i]>num[i-1])
            {
                swap(num[i],num[i-1]);
                i=0;
            }
        }
    }
    cout<<num;
}

int main()
{
    string number;
    cout<<"Enter the number: ";
    cin>>number;
    getLargestNumber(number);
    return 0;
}
