//hollow pyramid pattern
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    //top
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
            cout<<" ";
            }
        cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(int i=0;i<(n-1);i++){ //  0 to 3
        for(int j=1;j<=i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){//n=4
            for(int j=0;j<2*(n-2-i)-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}