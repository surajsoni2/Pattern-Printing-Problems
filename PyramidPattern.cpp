/*

approach 1-
5
    *
   ***
  *****
 *******
*********


approch 2-

5
     *
    * *
   * * *
  * * * *
 * * * * *

*/

// approch 1-

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n*2; j++)
        {
            if(j>n+i-1){
                break;
            }
            if (j<n-i+1)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
}


// approach 2
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<n-i-1)
            {
                cout<<" ";
            }
            else{
                cout<<" *";
            }
            
        }
        cout<<endl;
    }
    
}
*/