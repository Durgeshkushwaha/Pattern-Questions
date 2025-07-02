// 1 2 3 4 5 6 7 8 9  for n=9
//   1 2 3 4 5 6 7
//     1 2 3 4 5
//       1 2 3
//         1
        
#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x=n/2+1;
	for(int i=1; i<=x; i++) {
		for(int k=1; k<i; k++) {
			cout<<"  ";  //Node: two consecutive spaces eg."  "
		}
		for(int j=1; j<=n; j++) {
			cout<<j<<" ";
		}
		n=n-2;
		cout<<endl;
	}
	return 0;
}