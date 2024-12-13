#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
   int piv=-1;
   int n=nums.size();
   for(int i=n-2;i>=0;i--){
    if(nums[i]<nums[i+1]){
        piv=i;
        break;
    }
   }
   if(piv==-1){
    reverse(nums.begin(),nums.end());//inplace changes
    return;
   }  

   //2nd step
   for(int i=n-1;i>piv;i--){
    if(nums[i]>nums[piv]){
        swap(nums[i],nums[piv]);
        break;
    }
   }
   //3rd step

   //reverse(nums.begin()+pivot+1,nums.end());
   int i=piv+1, j=n-1;
   while(i<=j){
    swap(nums[i],nums[j]);
    i++;
    j--;
   }   
}

int main(){
    vector<int>nums={1,2,3,6,5,4};
    int n=nums.size();
    nextPermutation(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}