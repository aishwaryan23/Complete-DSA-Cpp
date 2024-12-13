#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    int n=nums.size();
    int first=-1,last=-1;
    int st=0,end=n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(nums[mid]<target){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    last=-1;
    end=n-1;//resetting
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            last=mid;
            st=mid+1;
        }else if(nums[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return{first,last};
}
int main()
{
    vector<int>nums={2,4,6,8,8,8,11,13};
    int target=8;
    vector<int>ans=searchRange(nums,target);
    cout<<ans[0]<<" "<<ans[1];
}