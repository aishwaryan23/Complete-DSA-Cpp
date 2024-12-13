#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallidx=i;//unsorted
        for( int j=i+1;j<n;j++){
            if(arr[j]<arr[smallidx]){
                smallidx=j;
            }
        }
        swap(arr[i],arr[smallidx]);
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
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}