#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int arr[],int n){
   int prev,curr;
   for(int i=1;i<n;i++){
        curr=arr[i];
        prev=i-1;
        while(prev>=0 && arr[prev]>curr){//for descending arr[prev]<curr
            arr[prev+1]=arr[prev];
            prev--;
        }
    arr[prev+1]=curr;
   }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    insertionSort(arr,n);
    print(arr,n);
    return 0;
}