// Hollow Square:
// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)   // for upper and lower side of square.
        {
            for (int j = 1; j <= n; j++)
                cout << "* ";
            cout << "\n";
        }
        else {                          // for hollow part 
            for(int k=1;k<=n;k++){
                if(k==1 || k==n) cout<<"* ";
                else cout<<"  ";
            }
            cout<<"\n";
        }
    }
}