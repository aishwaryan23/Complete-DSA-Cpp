#include<iostream>
#include<string>
using namespace std;
bool isfreqsame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
} 
 bool checkInclusion(string s1, string s2) {
        
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }
    //sliding window

    
    int windowsize=s1.length();
    for(int i=0;i<s2.length();i++){
    int windowidx=0,idx=i;
    int windowfreq[26]={0};
    while(windowidx<windowsize && idx<s2.length()){
        windowfreq[s2[idx]-'a']++;
        windowidx++;
        idx++;
    }
    if(isfreqsame(freq,windowfreq)){
        return true;
    }
    }
    return false;
 }

 int main()
 {
    string s1="ab";
    string s2="eidbaooo";
    cout<<checkInclusion(s1,s2)?"true":"false";
    

 }