#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int> &nums){

    int n=nums.size();

    int temp=0,st=0;

    for(int i=0;i<n;i++){
        if(nums[i]!=0)
        {
            nums[st]=nums[i];
            st++;
        }
    }
    while(st<n){
        nums[st++]=0;
    }
}
int main(){
    vector<int> nums={0,1,0,3,12};
    moveZeroes(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}