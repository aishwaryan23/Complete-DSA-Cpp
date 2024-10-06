// reverse triangle pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>0;j--){
//             cout<<j<<" ";
//         }

//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<char(ch+j-1)<<" ";

        }
        cout<<endl;
    }
    return 0;
}

// A 
// B A
// C B A
// D C B A

    
