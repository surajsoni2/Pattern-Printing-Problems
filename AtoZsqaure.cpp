/* 
i/p - 5
o/p-    A B C D E
        F G H I J
        K L M N O
        P Q R S T
        U V W X Y
*/

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

