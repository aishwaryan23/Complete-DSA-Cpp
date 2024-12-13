#include<iostream>
using namespace std;
int water(int height[],int n){
    int width=0,maxwater=0,start=0,end=n-1,ht,currWater=0;
    while(start<end){
    //for(int i=0;i<n;i++){
        //for(int j=i+1;j<n;j++){
                width=end-start;
                ht=min(height[start],height[end]);
                currWater=ht*width;
                maxwater=max(maxwater,currWater);
                height[start]<height[end]?start++:end--;
            // if(height[start]<height[end]){
            //     width=max()
            // }
            // start++;
            // end--;
        }
    return maxwater;
}
int main()
{
    int height[9]={1,8,6,2,5,4,8,3,7};
    int n=9;
    cout<<water(height,n);
    return 0;
}