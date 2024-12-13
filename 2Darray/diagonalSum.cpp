#include<iostream>
using namespace std;
int diagonal(int matrix[][4],int n){
    int sum=0;
    //pd :j==i
    //pd: j==n-i-1
    //  for(int i=0;i<n;i++){//0 to n-1    //o(n*n)
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             sum+=matrix[i][j];
    //         }
    //         else if(j==n-1-i){
    //             sum+=matrix[i][j];
    //         } 
    //     }
    // }
    for(int i=0;i<n;i++){ //O(n)
        sum+=matrix[i][i];

        if(i!=n-1-i){
           sum+=matrix[i][n-1-i]; 
        }
    
    }
    return sum;
}
int main()
{
    int  matrix[4][4]={{1,2,3,4},{3,4,5,4},{7,8,9,4},{9,0,1,2}};
    int n=4;
    cout<<diagonal(matrix,n);
    return 0;
   
}

//2D vector
// vector<vector<int>> m;
//row =mat.size
//col=mat[i].size