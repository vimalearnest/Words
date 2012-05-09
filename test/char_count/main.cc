#include <iostream>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
  set<char> chars;

  char c;
  while (cin.get(c)) {
    chars.insert(c);
  }

  cout << "found " << chars.size() << " characters." << endl;

  return 0;
}
