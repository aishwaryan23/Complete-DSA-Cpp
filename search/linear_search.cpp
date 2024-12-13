#include<iostream>
using namespace std;
int linearSearch(int arr[],int key)
{

    for(int i=0;i<7;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;//not found
}
int main()
{
    int arr[7]={4,2,7,8,1,2,5};
    int key =5;
    cout<<linearSearch(arr,key);
    return 0;
}
