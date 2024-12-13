#include<iostream>
#include<limits.h>
using namespace std;
//brute force method
int main()
{
    int arr[7]={3,-4,5,4,-1,7,-8};
    int n=7;
    // for(int st=0;st<n;st++)
    // {
    //     for(int end=st;end<n;end++)
    //     {
    //         for(int i=st;i<=end;i++)
    //         {
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // //maximum subarray sum
    // int maxSum=0;
    // for(int start=0;start<n;start++){
    //         int currSum=0;
    //     for(int ed=start;ed<n;ed++){
    //         currSum+=arr[ed];
    //         maxSum=max(currSum,maxSum);
    //     }
    // }
    // cout<<"maximum subarray sum = "<<maxSum;

    //Kadane's algo
    int sum=0,maximum=INT_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maximum=max(sum,maximum);
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<maximum;
    return 0;
}