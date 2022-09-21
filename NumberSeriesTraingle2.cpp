/*
Pattern - 

1 
2 3
3 4 5
4 5 6 7

*/

// Approach 1 -  using extra variable
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x=1;
    for (int i=1;i<=n;i++){
        x=i;
        for (int j=1;j<=i;j++){
            cout<<x++<<" ";
        }
        cout<<endl;
    }
}

// Approach 2- Row+Column-1

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<i+j-1<<" ";
//         }
//         cout<<endl;
//     }
// }