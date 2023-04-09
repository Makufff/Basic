#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[]){
  ios_base::sync_with_stdio(0) , cin.tie(0) ;
  map<string, int> m;

  // insert elements into the map
  m.insert(make_pair("Alice", 23));
  m.insert(make_pair("Bob", 19));
  m.insert(make_pair("Charlie", 45));

  // check if a key is present in the map
  if (m.count("Alice") > 0) {
    cout << "Alice is present in the map" << "\n";
  }

  // iterate over the elements in the map
  for (auto it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " => " << it->second << "\n";
  }

  // find the value associated with a key in the map
  auto it = m.find("Bob");
  if (it != m.end()) {
    cout << "Bob's age is " << it->second << "\n";
  }

  // erase an element from the map
  m.erase("Charlie");

  // clear all elements from the map
  m.clear();

  return 0;
}
