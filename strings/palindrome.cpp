#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s){
    int st=0, end=s.length()-1;
    while(st<end){
        if(!isalnum(s[st])){
            st++; 
            cout<<"st ="<<st<<endl; 
            continue;
        } 
         
        if(!isalnum(s[end])){
            end--; 
            cout<<"end ="<<end<<endl;
            continue;
        } 
        
         
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }

        st++; cout<<"st ="<<st<<endl;
        end--;cout<<"end ="<<end<<endl;
    }
    return true;
}

int main()
{
    string s="$am&m!a#";
    cout<<palindrome(s);
    return 0;
}
