// 1
// 3*2
// 4*5*6
// 10*9*8*7
// 11*12*13*14*15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        int start_num = num;
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)  // Odd row: increasing order
            { 
                if (j == i)
                    cout << start_num;
                else
                    cout << start_num << "*";
                start_num++;
            }
            num = start_num;
        }
        else
        {
            start_num = num + i - 1;

            for (int j = 1; j <= i; j++)    // Even row: decreasing order
            { 
                if (j == i)
                    cout << start_num;
                else
                    cout << start_num << "*";
                start_num--;
            }
            num = num + i;
        }
        cout << "\n";
    }
    return 0;
}