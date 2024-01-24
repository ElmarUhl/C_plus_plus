#include <iostream>
using namespace std;

int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;

  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";

  struct myDataType {
    int myNum;
    string myString;
  };

  myDataType myVar;
  myVar.myNum = 1;
  myVar.myString = "Hello";

  cout << myVar.myNum << "\n";
  cout << myVar.myString << "\n";

  return 0;
}
