#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

bool isSub(string s, string t){
   int i=0,j=0;
   while(i<s.length() && j<t.length()){
        if(s[i]==t[j]){
            i++;
        }
    j++;
   }
   return i==s.length();
}

int main()
{
    string s="axc";
    string t="ahbgdc";
    cout<<isSub(s,t);
    return 0;

}