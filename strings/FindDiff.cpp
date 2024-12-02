#include<iostream>
#include<string>
using namespace std;
char findTheDifference(string s, string t) {
   s+=t;
   int c=0;
   for(auto x: s){
    c=c^x;
   }
   return c;      
}
int main()
{
    string s="abcd";
    string t="abcde";
    cout<<findTheDifference(s,t);
    return 0;
}
