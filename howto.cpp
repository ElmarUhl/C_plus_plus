#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum;
  
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
  
  return 0;
}

