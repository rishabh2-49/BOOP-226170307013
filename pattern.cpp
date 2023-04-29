#include<iostream>
using namespace std;
int main () {
	int i,j,a=1;
	for (i=4;i>=1;i--) {
		for (j=1;j<=i;j++ ) {
			cout << " ";
		}
		for (j=4;j>=i;j--) {
			cout << a<<" ";
			a++;
		}
		cout << endl;
	}
}
