#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index; // To store the number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement
            if (num_to_index.find(complement) != num_to_index.end()) {
                // If complement is found, return the indices
                return {num_to_index[complement], i};
            }
            // Store the current number and its index in the map
            num_to_index[nums[i]] = i;
        }
        return {}; // Return an empty vector if no solution is found
    }


int main(){
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>ans=twoSum(nums,target);
    return 0;
    
}