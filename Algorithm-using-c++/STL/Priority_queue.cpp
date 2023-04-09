#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[]){
  ios_base::sync_with_stdio(0) , cin.tie(0) ;
  priority_queue<int> pri_q;

  // insert elements into the queue
  pri_q.push(3);
  pri_q.push(1);
  pri_q.push(4);
  pri_q.push(1);

  // check the queue is empty
  if (!pri_q.empty()) {
    cout << "The queue is not empty" << "\n";
  }

  // get the size of the queue
  cout << "The queue has " << pri_q.size() << " elements" << "\n";

  // get the top element of the queue
  cout << "The top element is " << pri_q.top() << "\n";

  // pop the top element from the queue
  pri_q.pop();

  // iterate over the elements in the queue
  while (!pri_q.empty()) {
    cout << pri_q.top() << " ";
    pri_q.pop();
  }
  cout << "\n";

  return 0;
}
