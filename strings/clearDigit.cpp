#include<iostream>
#include<string>
using namespace std;

string clearDigits(string s) {
    string ans="";
    for(char ch : s){
        if(isalpha(ch)){
            ans.push_back(ch);
        }
        else{
            ans.pop_back();
        }
    }
    return ans;     
}
int main(){
    string s="cb3";
    
    cout<<clearDigits(s);
    return 0;
}