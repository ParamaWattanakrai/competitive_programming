#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
  using namespace std;
  istringstream iss("This  is a string");
  string s;
  while ( getline( iss, s, ' ' ) ) {
    cout << s << endl;
  }
}