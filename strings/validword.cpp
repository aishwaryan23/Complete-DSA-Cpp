#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string lower(string& word) {
       for(auto &i:word){
        i=tolower(i);
       }
       return word;
    }
    bool isValid(string word) {
        vector<char> vowels={'a','e','i','o','u'};
        bool vowels_fl=false;
        bool consonant=false;
        bool ok=true;
        word=lower(word);
        for(auto &i:word){
            bool v = find(vowels.begin(),vowels.end(),i)!=vowels.end();
            if(v) vowels_fl=true;
            else if(i>='a' && i<='z' && !v) consonant=true;
            else if(i<'0' || i>'9') ok=false;
        }
        return vowels_fl && consonant && ok && word.size()>=3;
    }
int main()
{
    string word="Yas";
    cout<<(isValid(word)?"true":"false");
    return 0;
}