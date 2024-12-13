#include<iostream>
using namespace std;
int power(double x, int n){
    int binForm=n,ans=1;
    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x=x*x;
        binForm/=2;
    }
    return ans;
}
int main()
{
    cout<<power(3,5);
    return 0;
}