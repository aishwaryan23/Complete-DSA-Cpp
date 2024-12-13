#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int findMin(vector<int>& nums) {
        int n =nums.size();
        int st=0, end=n-1;
        int ans=INT_MAX;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[st]<=nums[mid]){
                
                ans=min(ans,nums[st]);
                st=mid+1;
            }
            else{
                end=mid-1;
                ans=min(ans,nums[mid]);
            }
        }
        return ans;
    }

int main()
{
    vector<int>nums={4,5,6,7,0,1,2};
    cout<<findMin(nums);
    return 0;
}