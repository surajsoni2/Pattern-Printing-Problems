#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x=1;
        for (int j = 1; j <=n*2; j++)
        {
            if (j>=n+i)
            {
                break;
            }
            
            if (j<=n-i)
            {
                cout<<" ";
            }
            else if(j<n){
                cout<<x++;
            }
            else{
                cout<<x--;
            }
            
        }
        cout<<endl;
    }
    
}