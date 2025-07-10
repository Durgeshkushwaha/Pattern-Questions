//     E   n=5
//    D D
//   C   C
//  B     B
// A       A

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	char ch='A';
	ch+=n-1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++) {
			cout<<" ";
		}
		for(int k=1; k<=i*2-1; k++) {
			if(k==1 || k==i*2-1)
				cout<<ch;
			else cout<<" ";
		}
		ch--;
		cout<<"\n";
	}
	return 0;
}