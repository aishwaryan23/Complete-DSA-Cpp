#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isOdd(char c){
    int s =c-'0';
    return s%2!=0;
}
string largestoddNumber(string num){
    int end=num.length()-1;
    while(end>=0 && !isOdd(num[end])){
        end--;
    }
    if(end>=0){
        return num.substr(0,end+1);
    }
return "";
}
int main(){
    string s="42";
    cout<<largestoddNumber(s);
    return 0;
}
