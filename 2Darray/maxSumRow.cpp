#include<iostream>
#include<limits.h>
using namespace std;

int getSum(int matrix[][3],int rows, int col){
    int maxRowSum=INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSum=0;
        for(int j=0;j<col;j++){
            rowSum+=matrix[i][j];
            cout<<rowSum<<endl;
        }
        maxRowSum=max(maxRowSum,rowSum);
    }
    return maxRowSum;
}
int main()
{
    int matrix[3][3]={{3,4,5},{7,8,9},{9,0,1}};
    int rows=3;
    int col=3;
    cout<<getSum(matrix,rows,col);
    return 0;
}