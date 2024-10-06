#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){//for(int j=1;j<=i+1;j++) no need of variable 'k'
            cout<<"* ";
        }
        if(k<=n){
            k++;
        }
        cout<<endl;
    }
    return 0;

}

// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
