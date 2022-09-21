/*
Pattern-
        1
        3 2 1
        4 3 2 1
*/

#include<iostream>
using namespace std;

// Approach 1 - traversing columns in decreasing order 
int main(){

    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        
        for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}

// Approach 2- using extra variable

// int main(){

//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         int x=i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<x--<<" ";
//         }
//         cout<<endl;
        
//     }
    
// }