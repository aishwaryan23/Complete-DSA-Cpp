#include<iostream>
#include<vector>
using namespace std;
void getAns(vector<vector<int>>&mat,int r,int c,vector<string>&ans,string path){
    int n = mat.size();

    //base case
    if(r < 0 || c < 0 || r >= n || c >= n || mat[r][c]==-1) return;
    if(mat[r][c] == 0) return;
    if(r == n-1 && c == n-1) return ans.push_back(path); 


    mat[r][c] = -1;
    // vis[r][c] = true;
    //down
    getAns(mat,r+1,c,ans,path+"D");
    //up
    getAns(mat,r-1,c,ans,path+"U");
    //left
    getAns(mat,r,c-1,ans,path+"L");
    //right
    getAns(mat,r,c+1,ans,path+"R");

    mat[r][c] = 1;
}
vector<string> findpath(vector<vector<int>> &mat){
    int n =mat.size();
    vector<string>ans;
    string path= "";
    // vector<vector<bool>> vis(n,vector<bool>(n,false));
    getAns(mat,0,0,ans,path);
    return ans;
}
int main(){
    vector<vector<int>> mat={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

    vector<string> ans = findpath(mat);
    for(string path : ans){
        cout<<path<<endl;
    }
    return 0;
}