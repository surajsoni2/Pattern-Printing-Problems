// 3
// A B C 
// B C D
// C D E
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char j;
    for (char i = 65; i < 'A'+n; i++)
    {
        for (j = i; j < i+n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}