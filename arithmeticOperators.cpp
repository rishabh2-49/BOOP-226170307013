#include<iostream>
using namespace std;
int main () {
	int a,b;
	cout << "Enter a Number 1 : ";
	cin >> a;
	cout << "Enter a Number 2 : ";
	cin >> b;
	int ch;
	cout << "\n\nChoose Operation for 2 numbers \n (1) Addition\n(2) Subtraction\n(3) Multiplication\n(4) Division\n(5) Remainder\n(6) Exit\n\n>";
	cin >> ch;
	int ans;
	switch (ch) {
		case 1:
			ans = a+b;
			break;
		case 2:
			ans = a-b;
			break;
		case 3:
			ans = a*b;
			break;
		case 4:
			ans = a/b;
			break;
		case 5:
			ans = a%b;
			break;
		case 6: 
			cout << "Rhanks for using...";
			exit(0);
	}
	cout << "Ans is "<<ans<<".";
	return 0;
}
