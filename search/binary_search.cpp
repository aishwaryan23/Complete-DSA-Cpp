#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int st=0, end =nums.size()-1;
    
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target)
        {
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int>nums={1,3,5,6};
    int target =2;
    cout<<search(nums,target);
    return 0;
}