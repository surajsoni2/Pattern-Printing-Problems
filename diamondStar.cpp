/*
i/p - 5
o/p-
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n*2-1; i++)
    {
        for (int j = 1; j <= n*2; j++)
        {
            if (j>=n+i||j==n*3-i)
            {
                break;
            }

            
            if(j<=abs(n-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}