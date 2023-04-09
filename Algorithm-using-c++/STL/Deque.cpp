#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char const *argv[]){
  ios_base::sync_with_stdio(0) , cin.tie(0) ;
  // Create a deque of integers
  deque<int> dq;

  // Push elements back of deque
  dq.push_back(10);
  dq.push_back(20);
  dq.push_back(30);

  // Push  elements front of deque
  dq.push_front(5);
  dq.push_front(15);
  dq.push_front(25);

  // Print front and back elements of deque
  cout << "Front element: " << dq.front() << endl;
  cout << "Back element: " << dq.back() << endl;

  // Pop front and back elements off deque
  dq.pop_front();
  dq.pop_back();

  // Print new front and back elements of deque
  cout << "Front element after pop: " << dq.front() << endl;
  cout << "Back element after pop: " << dq.back() << endl;

  // Check deque is empty
  if (dq.empty()) {
    cout << "Deque is empty" << endl;
  } else {
    cout << "Deque is not empty" << endl;
  }

  // Print size of deque
  cout << "Deque size: " << dq.size() << endl;

  return 0;
}
