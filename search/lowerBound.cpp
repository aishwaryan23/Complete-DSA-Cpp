//binary search
#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int>&arr, int n, int x)
{
    // int st=0, end=n-1;
    // int ans=n;
    // while(st<=end){
    //     int mid = st+(end-st)/2;
    //     if(arr[mid]>=x){
    //         ans = mid;
    //         end=mid-1;
    //     }else{
    //         st=mid+1;
    //     }
    // }
    int ans=lower_bound(arr.begin(),arr.end(),x)-(arr.begin());
    return ans;
}
int main()
{
    vector<int>arr={1,2,3,5,5,5};
    int n =arr.size();
    int x=5;
    cout<<lowerBound(arr,n,x);
    return 0;
}