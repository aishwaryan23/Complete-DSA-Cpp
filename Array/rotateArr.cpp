#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>&arr,int k){
    k%=arr.size();
    reverse(arr.begin(),arr.begin()+(arr.size()-k));
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr.begin()+(arr.size()-k),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7};
    int k=3;
    rotate(arr,k);
    return 0;
}