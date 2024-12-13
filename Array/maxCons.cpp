#include<iostream>
#include<vector>
using namespace std;
int maximumConsecutive(vector<int> &nums){
    int count=0,temp=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0){
            count=0;
        }
        
        else {
            count++;
            temp=max(temp,count);
            }
    }
    return temp;
}
int main(){
    vector<int>nums={1,0,1,1,0,1};
    cout<<maximumConsecutive(nums);
    return 0;
}