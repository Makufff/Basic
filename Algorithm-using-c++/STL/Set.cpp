#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[]){
  ios_base::sync_with_stdio(0) , cin.tie(0) ;
  set<int> s;

  // insert elements into the set
  s.insert(3);
  s.insert(1);
  s.insert(4);
  s.insert(1);

  // check if a value is present in the set
  if (s.count(3) > 0) {
    cout << "3 is present in the set" << "";
  }

  // iterate over the elements in the set
  for (int i : s) {
    cout << i << " ";
  }
  cout << "\n";

  // find an element in the set
  auto it = s.find(4);
  if (it != s.end()) {
    cout << "4 is present in the set" << "\n";
  }

  // erase an element from the set
  s.erase(1);

  // clear all elements from the set
  s.clear();

  return 0;
}
