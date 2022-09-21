#include<iostream>
using namespace std;


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