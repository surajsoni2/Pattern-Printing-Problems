// A A A 
// B B B
// C C C

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (char i = 65; i < 'A'+n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
}