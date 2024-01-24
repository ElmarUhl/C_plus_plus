// initialization of variables

#include <iostream>
using namespace std;

int main ()
{
  /* Interger */
  int a=5, b(3), c{2};   // initial value: 2
  int result;            // initial value undetermined

  cout << a << " " << b << " " << c << "\n";
  a = a + b;
  result = a - c;
  cout << result;
  
  int foo = 0;
  auto bar = foo;  // the same as: int bar = foo; 
  decltype(foo) bar2;  // the same as: int bar; 

  return 0;
}

