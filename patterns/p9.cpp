//pyramid pattern
#include<iostream>
using namespace std;
int main()
{
    int n=8;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}