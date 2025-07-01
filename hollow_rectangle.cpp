// ********************   hollow rectangle
// *                  *
// *                  *
// *                  *
// *                  *
// ********************

#include <iostream>
using namespace std;

int main()
{
    cout << "enter the value of n and m" << "\n";
    int n, m;   // n==rows and m==columns
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)   // for upper and lower side of rectangle
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }
        else                              // for hollow part 
        {
            for (int k = 1; k <= m; k++)
            {
                if (k == 1 || k == m)
                {
                    cout << "* ";
                }
                else
                    cout << "  ";
            }
            cout << "\n";
        }
    }
    return 0;
}