#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int> &a)
{
    
    int count=1;
    for(int i=1;i<a.size();i++){
        if(a[i-1]!=a[i])
        {
            a[count]=a[i];
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> a={1,1,2};
    cout<<removeDuplicates(a);
    return 0;
}
