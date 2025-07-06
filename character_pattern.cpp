// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n\n";
    cin >> n;
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << "\n";
        c++;
    }
    return 0;
}