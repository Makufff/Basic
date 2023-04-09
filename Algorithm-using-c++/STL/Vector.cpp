#include <iostream>
#include <vector>
using namespace std ;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    vector<int> v; // Declare Vector

    // Push value
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Print Vector using it
    cout << "The contents of the vector are: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // Print size and capacity of vector
    cout << "The size of the vector is: " << v.size() << "\n";
    cout << "The capacity of the vector is: " << v.capacity() << "\n";

    // Resize vector
    v.resize(5);

    // Print new size and capacity of vector
    cout << "The new size of the vector is: " << v.size() << "\n";
    cout << "The new capacity of the vector is: " << v.capacity() << "\n";

    // Insert value of vector
    v.insert(v.begin(), 0);

    // Print the contents of vector 
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // Remove last element
    v.pop_back();

    // Print the contents of vector 
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
