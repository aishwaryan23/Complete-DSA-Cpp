#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    string reverseVowels(string s) {
       int st=0,end=s.length()-1;
       while(st<end){
        while(st<end && !isVowel(s[st])){ ++st;}
        while(st<end && !isVowel(s[end])){ --end;}
        swap(s[st],s[end]);
        st++;
        end--;
       } 
       return s;
    }

int main()
{
    string s="hello";
    cout<<reverseVowels(s);
    return 0;
}