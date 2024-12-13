#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
bool isPossible(vector<int>&arr,int n,int m,int maxallowedtime){
    int painter=1,time=0;
    for(int i=0;i<n;i++){//O(n)
        if(arr[i]>maxallowedtime){
            return false;
        }
        if(time+arr[i]<=maxallowedtime){
            time+=arr[i];
        }else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=m? true : false;
    
}
int painter(vector<int>arr,int n,int m){
    if(m>n){
        return -1;
    }
    int sum=0, maxval=INT_MIN;
    for(int i=0;i<n;i++)//O(n)
    {
        sum+=arr[i];
        maxval=max(maxval,arr[i]);
    }
    int st=maxval, end=sum,ans=-1;
    while(st<=end){//O(log(sum)) * n
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr={40,30,10,20};
    int n=4,m=2;
    cout<<painter(arr,n,m);
    return 0;
}