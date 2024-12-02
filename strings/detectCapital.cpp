#include<iostream>
#include<string>
using namespace std;
bool detectCapitalUse(string word)
{    if(isupper(word[0])){
        if(isupper(word[1])){
            for(int i=2;i<word.length();i++){
                if(islower(word[i])){
                    return false;
                }
            }
        }else{
            for(int i=0;i<word.length();i++){
                if(isupper(word[i])){
                    return false;
                }
            } 
        }
}else{
    for(int i=0;i<word.length();i++){
        if(isupper(word[i])){
            return false;
        }
    }
}
  return true;  
}
int main()
{
    string word =" FlaG";
    cout<<(detectCapitalUse(word)?"true":"false");
    return 0;
}