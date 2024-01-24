#include <iostream>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];

  cars[0] = "Opel";
  cout << cars[0];

  for (int i = 0; i < 4; i++) {
    cout << i << " = " << cars[i] << "\n";
    //cout << i << "\n";
  }

  cout << sizeof(cars);

  int getArrayLength = sizeof(cars) / sizeof(string);
  cout << getArrayLength;

  for (int i = 0; i < sizeof(cars)/sizeof(string); i++) {
    cout << cars[i] << "\n";
  }

  //string letters[2][4];
  string letters[2][4] = {{"A", "B", "C", "D"}, {"E", "F", "G", "H"}};
  cout << letters[0][2];

  return 0;
}
