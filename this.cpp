// example on this
#include <iostream>
using namespace std;

class Dummy {
  public:
    bool isitme (Dummy& param);
};

bool Dummy::isitme (Dummy& param)
{
  if (&param == this) return true;
  else return false;
}

int main () {
  Dummy a;
  Dummy* b = &a;
  Dummy c;
  if ( b->isitme(c) ) {
    cout << "yes, &a is b\n";
  } else {
    cout << "no, is'nt b\n";
  }
  return 0;
}
