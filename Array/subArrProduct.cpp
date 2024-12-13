#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[3]={-3,-1,-1};
    int n=3;
    int pr=1, maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        pr*=arr[i];
        cout<<pr<<" "<<endl;
        maxi=max(pr,maxi);
        //cout<<pr<<" "<<maxi<<endl;
        if(pr<0)
            pr=0;
    }
    cout<<maxi;
    return 0;
}