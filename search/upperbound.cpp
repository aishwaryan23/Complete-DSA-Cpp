#include<iostream>
#include<vector>
using namespace std;
int upperBound(vector<int>&arr, int n, int x)
{
    int st=0, end=n-1;
    int ans=n;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]>x){
            ans = mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int>arr={2,3,6,7,8,8,11,11,11,12};
    int n =arr.size();
    int x=6;
    cout<<upperBound(arr,n,x);
    return 0;
}