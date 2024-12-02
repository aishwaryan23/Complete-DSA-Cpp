#include<iostream>
#include<string>
using namespace std;
bool ugly(int n){ //2^i * 3^j * 5^k
    if(n==1){ return true; }
    while( n%2==0){
        n=n/2;
    }
    while( n%3==0){
        n=n/3;
    }
    while(n%5==0){
        n=n/5;
    }
    return n==1;
    
}
int main()
{
    int n=14;
    cout<<ugly(n);
    return 1;
}