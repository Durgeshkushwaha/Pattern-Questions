// *       *  butterfly shape
// **     **   for n=5
// ***   ***
// **** ****
// *********
// **** ****
// ***   ***
// **     **
// *       *
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n\n";
    cin >> n;
    int col = 2 * n - 1;
    for (int i = 1; i <= n; i++) // upper half (eg: n rows)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j <= i || j > col - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    for (int i = n - 1; i >= 1; i--) // lower half (eg: n-1 row)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j <= i || j > col - i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}