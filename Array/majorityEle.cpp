#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//brute force method
// int majorityElement(vector<int>& nums) {
//         int count=0;
//         //vector<int>ans;
//         int n=nums.size();

//         for(int val:nums){

//             for(int ele:nums){
//                 if(ele==val)
//                     count++;
//             }
//             if(count>n/2){
//                 return val;
//             }
//         }
//         return -1;
// }

// slightly better approach
int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int ans=nums[0];
        //vector<int>ans;
        int n=nums.size();
        for(int val:nums){
            if(nums[val]==nums[val-1]){
                count++;
            }
            else{
                count=1;
                ans=nums[val];
            }
            if(count>n/2)
                return ans;
        }
}

//Moore's Voting algorithm
int majorityElement(vector<int>& nums) {
        int freq=0, ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        
            if(freq==0){
                ans=nums[i];
            }

            if(ans==nums[i]){
                freq++;
            }
            else
                freq--;
        }
        return ans;
        //if arr={1,2,3,4} moore's algo will give ans as 4 but that is wrong so
        //int count=0;
        //for(int val:nums)
        //if(ans==val)
        //cout++;
        //if(count>n/2) return ans else return -1
        //ADD THIS STEP EXTRA IF THEY DONT MENTION ANS ALWAYS DOESN'T EXIST

}

int main()
{
    vector<int>nums={1,2,2,1,1};
    cout<<majorityElement(nums);
    return 0;

}