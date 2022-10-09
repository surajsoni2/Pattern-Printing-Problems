/*
i/p-3
o/p-
  1
 23
456
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout<<x++;
            }
        }
        cout<< endl;
    }
}