#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverseString (string s){
    
    string ans="";
    int n=s.length();
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}

int main()
{
    string s= "hello world";
    cout<<reverseString(s);
    return 0;
}