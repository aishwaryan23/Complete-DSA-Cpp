#include<iostream>
using namespace std;

bool sumOfNumberAndReverse(int num) {
    if(num==0){ return true;}
    for(int i=0;i<=num/2; i++){
        int n=i;
        int rev=0;
        while(n){
            rev=rev*10 + n%10;
            n=n/10;
        }
        if(i+rev==num){
            return true;
        }
    }
    return false;
        
}
int main()
{
    int num=0;
    cout<<sumOfNumberAndReverse(num);
    return 0;
}
