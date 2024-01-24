#include <iostream>
using namespace std;

class MyClass {               // The class
  public:                     // Acess specifier
    int myNum;                // Attribute (int variable)
    string myString;          // Attribute (string variable)
    
    void myMethod() {         // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main () {
  MyClass myObj;              // Create an object of MyClass
  
  // Acess attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";
  
  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  
  myObj.myMethod();          // Call the method
  
  return 0;
}

