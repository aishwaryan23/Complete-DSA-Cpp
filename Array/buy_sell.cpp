#include<iostream>
using namespace std;
int stock(int price[],int n){
    int maxProfit=0,bestBuy=price[0];
    for(int i=0;i<n;i++){
        if(price[i]>bestBuy){
            maxProfit=max(maxProfit,price[i]-bestBuy);
        }
        bestBuy=min(bestBuy,price[i]);
        
    }
    return maxProfit;
}
int main()
{
    int arr[6]={7,1,5,3,6,4};
    int n=6;
    cout<<stock(arr,n);
}