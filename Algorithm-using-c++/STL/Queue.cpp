#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[]){
  ios_base::sync_with_stdio(0) , cin.tie(0) ;
  // Create a queue of integers
  queue<int> que;

  // push value in queue
  que.push(10);
  que.push(20);
  que.push(30);

  // Print front element of queue
  cout << "Front element: " << que.front() << "\n";

  // Dequeue front element of queue
  que.pop();

  // Print new front element of queue
  cout << "Front element after pop: " << que.front() << "\n";

  // Check queue is empty
  if (que.empty()) {
    cout << "Queue is empty" << "\n";
  } else {
    cout << "Queue is not empty" << "\n";
  }

  // Print size of queue
  cout << "Queue size: " << que.size() << "\n";

  return 0;
}
