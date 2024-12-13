#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums )
{
    int ans=0;
    for(int val: nums)
    {
        ans=ans^val;
    }
    return ans;
}
int main(){
    vector<int> vec={ 4,1,2,1,2};
    cout<<singleNumber(vec);
    return 0;
}