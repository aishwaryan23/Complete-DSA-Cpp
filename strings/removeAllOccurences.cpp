#include<iostream>
#include<string>
using namespace std;
string removeAlloccurences(string s, string part){
    while(s.length() > 0 && s.find(part)<s.length()){
        cout<<s.find(part)<<endl;
        cout<<part.length();
        s.erase(s.find(part),part.length());
        cout<<s<<endl;
    }
    return s;
}
int main()
{
    string s="daabcaabcdc";
    string part="abc";
    cout<<removeAlloccurences(s,part);
    return 0;
}