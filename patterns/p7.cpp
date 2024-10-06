//floyds triangle
#include <iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i=1;i<=n;i++){
        //for(int j=i;j>0;j--)
        for(int j=1;j<i+1;j++){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }
}