#include<iostream>
#include<vector>
using namespace std;
// vector<int> productArray(vector<int> nums,int n){
//     vector<int>ans(n,1);//ans[5]={1,1,1,1}
//     for(int i=0;i<n;i++){
//         int prod=1;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//             prod*=nums[j];
//             }
//         }
//     ans[i]=prod;
//     }
//     return ans;
// }

vector<int> products(vector<int>nums){
    int n=nums.size();
    vector<int> prefix(n,1);
    vector<int>ans(n,1);
    vector<int>suffix(n,1);
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4};
    // vector<int>ans=productArray(nums,n);
    vector<int>ans=products(nums);
    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}