#include <iostream>
using namespace std;
int x = 10;
int main() {
  int x = 5;
  cout << "Local x = " << x << endl;
  cout << "Global x = " << ::x << endl;
  return 0;
}

