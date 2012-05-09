#include <set>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  set<string> words;
  
  while (cin) {
    string t;
    cin >> t;

    words.insert(t);
  }

  cout << "count of words : " << words.size() << endl;
}
