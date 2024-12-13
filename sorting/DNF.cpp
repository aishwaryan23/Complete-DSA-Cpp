//Dutch national flag algorithm
#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
        int n=nums.size();
        int mid=0,high=n-1,low=0;
        while(mid<=high){//o)n
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }

int main()
{
    vector<int>nums={2,0,2,1,1,0,1,2,0,0};
    sortColors(nums);
    return 0;
}