// *   half-diamond-star
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)    // upper half
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n - 1; i++)  // lower half
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}