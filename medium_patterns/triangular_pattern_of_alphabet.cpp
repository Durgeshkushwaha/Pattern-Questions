// A B C D E  for n=5
// B C D E
// C D E
// D E
// E

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "entet the value of n\n";
    cin >> n;
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        char character = c;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << character << " ";
            character++;
        }
        cout << "\n";
        c++;
    }
    return 0;
}