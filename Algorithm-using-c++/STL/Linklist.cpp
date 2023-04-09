#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    list<int> linkedList;

    linkedList.push_front(10);
    linkedList.push_front(20);
    linkedList.push_front(30);
    linkedList.push_front(40);

    for (auto it = linkedList.begin(); it != linkedList.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    linkedList.remove(20);

    for (auto it = linkedList.begin(); it != linkedList.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    auto searchIt = find(linkedList.begin(), linkedList.end(), 30);
    if (searchIt != linkedList.end()) {
        cout << "Found at position " << distance(linkedList.begin(), searchIt) << "\n";
    } else {
        cout << "Not found" << "\n";
    }

    return 0;
}
