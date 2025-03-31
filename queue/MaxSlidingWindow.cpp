#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int>MaxSlidingWindow(vector<int>nums,int k){
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i =k;i<=nums.size()-1;i++){
        ans.push_back(nums[dq.front()]);
        while(dq.size()>0 && dq.front() <= i-k){
            dq.pop_front();
        }
        while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);

    }
    ans.push_back(nums[dq.front()]);
    return ans;
}

int main(){

    vector<int>nums={1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int>ans = MaxSlidingWindow(nums,k);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}