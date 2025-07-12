//   1   for n=5
//  1*2
// 1*2*3
//  1*2
//   1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n\n";
    cin >> n;
    int x = n / 2;
    for (int i = 1; i <= n / 2 + 1; i++) // upper half
    {
        for (int j = i; j <= x; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            if (i > 1 && k != i)
                cout << k << "*";
            else
                cout << k;
        }
        cout << "\n";
    }

    for (int i = 1; i <= n / 2; i++) // lower half
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n / 2 - i + 1; k++)
        {
            if (i < n / 2 && k != n / 2 - i + 1)
                cout << k << "*";
            else
                cout << k;
        }
        cout << "\n";
    }

    return 0;
}