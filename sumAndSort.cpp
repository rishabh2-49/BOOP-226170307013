#include <iostream>
using namespace std;
int main() {
	int arr[10],i,j,sum = 0;
	cout << "Enter 10 integers: ";
    for (i = 0; i < 10; i++) {
    	cin >> arr[i];
    	sum += arr[i];
	}
	float average = sum / 10.0;
	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;
	int temp;
	for (i = 0; i < 10 - 1; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) {
        	temp = arr[i];
        	arr[i] = arr[j];
        	arr[j] = temp;
      		}
    	}
	}
	cout << "Sorted array in ascending order: ";
	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

