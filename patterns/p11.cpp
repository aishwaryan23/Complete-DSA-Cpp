//butterfly
#include<iostream>
using namespace std;
int main(){
    int n=4;
    //top
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<" *";
        }
        if(i!=n){
            for(int j=1;j<2*(n-1-i)+1;j++){
                cout<<"  ";
            }
        }
        for(int j=i+1;j>0;j--){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) {
            cout<<" *";
        }
        int c=(2*n-2*i);
        for(int j=1;j<=c;j++) {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++) {
            cout<<" *";
        }
        cout<<endl;
    }
}