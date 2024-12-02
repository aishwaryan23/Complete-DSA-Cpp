#include<iostream>
#include<string>
#include<vector>
using namespace std;
 vector<string> fizzBuzz(int n) {
    vector<string> ans;
    int i=1;
    while(i<=n){
        if(i%3==0){
            if(i%5==0){
                ans.push_back("FizzBuzz");
            }else{
                ans.push_back("Fizz");
            }
        }else if(i%5==0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(to_string(i));
        }
        i++;
    }
 
       
    
    return ans;     
}
int main(){
    int n=15;
    vector<string>ans=fizzBuzz(n);
    cout<<ans[0]<< " " << ans[1]<< " "<<ans[2]<<ans[3]<<" "<<ans[4]<<" "<<ans[5];
    return 0;
}