// numeric_limits example
#include <iostream>     // std::cout
#include <limits>       // std::numeric_limits

int main () {
  const char newline('\n');

  std::cout << std::boolalpha;
  std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
  std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << newline;
  std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << '\n';
  std::cout << "Non-sign bits in int: " << std::numeric_limits<int>::digits << '\n';
  std::cout << "int has infinity: " << std::numeric_limits<int>::has_infinity << '\n';
  std::cout << "\n";

  std::cout << "Minimum value for unsigned short int: " << std::numeric_limits<unsigned short int>::min() << '\n';
  std::cout << "Maximum value for unsigned short int: " << std::numeric_limits<unsigned short int>::max() << '\n';
  std::cout << "Unsigned short int is signed: " << std::numeric_limits<unsigned short int>::is_signed << '\n';
  std::cout << "Non-sign bits in unsigned short int: " << std::numeric_limits<unsigned short int>::digits << '\n';
  std::cout << "Unsigned short int has infinity: " << std::numeric_limits<unsigned short int>::has_infinity << '\n';
  std::cout << "\n";
  
  std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << '\n';
  std::cout << "Maximum value for float: " << std::numeric_limits<float>::max() << '\n';
  std::cout << "Float is signed: " << std::numeric_limits<float>::is_signed << '\n';
  std::cout << "Non-sign bits in float: " << std::numeric_limits<float>::digits << '\n';
  std::cout << "Float has infinity: " << std::numeric_limits<float>::has_infinity << '\n';
  std::cout << "\n";
  
  std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << '\n';
  std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << '\n';
  std::cout << "Double is signed: " << std::numeric_limits<double>::is_signed << '\n';
  std::cout << "Non-sign bits in double: " << std::numeric_limits<double>::digits << '\n';
  std::cout << "Double has infinity: " << std::numeric_limits<double>::has_infinity << '\n';

  return 0;
}

