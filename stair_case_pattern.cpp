// * *    Stair Case Patterns
// * *      for n==6
// * * * *
// * * * *
// * * * * * *
// * * * * * *

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int k=0;
	for(int i=1; i<=n; i++) {

		for(int j=1; j<=2+k; j++) {
			cout<<"* ";
		}
		if(i%2==0) k+=2;
		cout<<"\n";
	}

	return 0;
}