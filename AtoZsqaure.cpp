#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char alpha = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<alpha++<<" ";
        }
        
        cout << endl;
    }
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char j;
//     for (char i = 65; i < 'A'+n; i++)
//     {
//         for (j = i; j < i+n; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

// }