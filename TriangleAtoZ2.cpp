#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char j = 'A';
    for (char i = 'A'; i < 'A'+n; i++)
    {
        for (char j = i; j <= i+(i-'A'); j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
    

}