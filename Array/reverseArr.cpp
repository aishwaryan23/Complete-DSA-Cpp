//2 *pointer approach
#include<iostream>
using namespace std;
int reverseArr(int arr[]){
    int start=0,end=6;
    while(start<end){//even
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[7]={4,7,2,0,4,6,9};
    reverseArr(arr);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}