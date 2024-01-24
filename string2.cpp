#include <iostream>
using namespace std;

int main() {
  string firstName = "John";
  string lastName = "Doe";
  string fullName = firstName + " " + lastName;
  cout << fullName;

  fullName = firstName.append(lastName);
  cout << fullName;

  string txt = "ABCDEFGHIJKLMNOPQRSTUWVXYZ";
  cout << "The length of the string is: " << txt.length();
  cout << txt.size();

  cout << txt[0];

  txt[1] = '1';
  cout << txt;

  cout << "Type your full name: ";
  getline(cin, fullName);
  cout << "Your name is: " << fullName;

  return 0;
}
