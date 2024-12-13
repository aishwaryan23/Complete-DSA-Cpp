#include<iostream>
#include<vector>
#include<set>
using namespace std;

    set<vector<int>> s;
    void helper(vector<int>& arr,int i, vector<int>&combination, vector<vector<int>> &ans,int target)
    {
        int n = arr.size();
        if(i==n || target<0){
            return;
        }
        if(target==0){
            if(s.find(combination)==s.end()){
                ans.push_back(combination);
                s.insert(combination);
            }
            return;
        }

        combination.push_back(arr[i]);
        //single
        helper(arr,i+1,combination,ans,target-arr[i]);
        //multiple
        helper(arr,i,combination,ans,target-arr[i]);

        //exclusion
        combination.pop_back();
        helper(arr,i+1,combination,ans,target-arr[i]);
        
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int>combination;
        helper(arr,0,combination,ans,target);
       return ans;
    }
int main()
{
    vector<int>arr={2,3,5};
    int target=8;
    combinationSum(arr,target);
    return 0;
}