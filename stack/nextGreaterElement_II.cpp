#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> NextGreaterElement(vector<int>&nums){
    stack<int> s;
    vector<int> ans(nums.size(),-1);
    int n = nums.size();
    for(int i=2*n-1;i>=0;i--){
        while(s.size() > 0 && nums[s.top()] <= nums[i%n]){
            s.pop();
        }

        ans[i%n] = s.empty() ? -1: nums[s.top()];
        s.push(i%n);
    }
    return ans;
}
int main(){
    vector<int>nums = {3,6,5,4,2};
    vector<int> ans = NextGreaterElement(nums);
    for(int x: ans){
        cout<<x<<" ";
    }
     return 0;

}
