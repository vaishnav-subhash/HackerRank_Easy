#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
long int getMinimumCost(long int a[],long int s){
    long int sum=0,j=0;
    unordered_map<long int,long int>array;
    for(long int i=0;i<s;i++){
        array[a[i]]++;
    }
    long int ms=array.size();
    long int cnt[ms];
    for(auto it=array.begin();it!=array.end();++it){
        cnt[j]=it->second;
        j++;
    }
    sort(cnt,cnt+ms,greater<int>());
    j=1;
    for(int i=0;i<ms;i++){
        sum+=(j*cnt[i]);
        j++;
    }
    return sum;
}
int main(){
    long int n;
    cin>>n;
    long int arr[n];
    for(long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<getMinimumCost(arr,n);
    return 0;
}