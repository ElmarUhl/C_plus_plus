#include <iostream>
using namespace std;

// Create a function
void myFunction() {
  cout << "I just got executed!";
  }
  
void myFunction2(); // function declaration

void myFunction3(string fname) {
  cout << fname << " Refsnes\n";
}

void myFunction4(string country = "Norway") {
  cout << country << "\n";
}

void myFunction5(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int myFunction6(int x) {
  return 5 + x;
}

int myFunction7(int x, int y) {
  return x + y;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void myFunction8(int myNumbers[5]) {
  for (int i=0; i<5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int sum(int k) {
 if (k > 0) {
   return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  myFunction(); // call the function
  myFunction();
  myFunction();
    
  myFunction2();
    
  myFunction3("Liam");
  myFunction3("Jenny");
  myFunction3("Anja");

  myFunction4("Sweden");
  myFunction4("India");
  myFunction4();
  myFunction4("USA");

  myFunction5("Liam", 3);
  myFunction5("Jenny", 14);
  myFunction5("Anja", 30);

  cout << myFunction6(3);

  cout << myFunction7(5, 3);
  int z = myFunction7(5, 3);
  cout << z;

  int firstNum = 10;
  int secondNum = 20;
  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";
  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);
  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction8(myNumbers);

  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;

  int result = sum(10);
  cout << result;
   
  return 0;
}
  
void myFunction2() {
  cout << "I just got executed!";
}

