/*
i/p- 4
   1
  22
 333
4444
*/
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

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
                cout << i;
            }
        }
        cout<<endl;
    }
}