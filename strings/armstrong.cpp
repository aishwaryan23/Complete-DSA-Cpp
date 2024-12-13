#include<bits/stdc++.h>
#define INT_MAX 2147483647
using namespace std;
bool armstrong(int x){
    int ans=0,temp=x,rem=0;
    while(temp>0){
    rem=temp%10;
    if(ans > INT_MAX/10 || (ans<INT_MIN/10) )
        return 0;
    temp=temp/10;
    ans=ans+pow(rem,3);
    }
    if(ans==x){
        return true;
    }
    else return false;

}
int main()
{
    cout<<armstrong(372);
    return 0;
}