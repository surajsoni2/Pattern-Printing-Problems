/*
i/p- 5

o/p-
E 
D E
C D E
B C D E
A B C D E

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char j = 'A';
    for (char i = 'A'+n-1; i >= 'A'; i--)
    {
        for (char j = i; j < i+('A'+n-i); j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    

}