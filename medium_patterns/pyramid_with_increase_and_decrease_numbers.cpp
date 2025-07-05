//     1
//    232
//   34543
//  4567654
// 567898765

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    for (int i = 1; i <= n; i++)
    {
        num = i;
        for (int j = 1; j <= n - i; j++)  // for space
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)  // for increasing numbers (eg.in 3rd line 3,4,5) 
        {
            cout << num << " ";
            num++;
        }
        num -= 2;
        for (int k = 1; k <= i - 1; k++)  // for decreasing numbers (eg.in 3rd line 4,3)
        {
            cout << num << " ";
            num--;
        }
        cout << "\n";
    }
    return 0;
}