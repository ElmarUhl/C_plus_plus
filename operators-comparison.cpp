#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;

  cout << (x == y); // equal to
  cout << (x != y); // not equal
  cout << (x > y);
  cout << (x < y);
  cout << (x >= y);
  cout << (x <= y);


  cout << ((x != y) && (x > y)); // AND
  cout << ((x == 5) || (x == 0)); // OR
  cout << (!(x == 3)); // NOT

  return 0;
}
