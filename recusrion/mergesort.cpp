#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
       temp.push_back(arr[i]);
        i++; 
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=0;i<temp.size();i++){
        arr[i+st]=temp[i];
    }
}
void mergeSort(vector<int>&arr,int start,int end){
    if(start<end){
        int mid = start + (end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}

int main()
{
    vector<int>arr={12,31,35,8,32,17};
    int n=arr.size();
    mergeSort(arr,0,n-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}