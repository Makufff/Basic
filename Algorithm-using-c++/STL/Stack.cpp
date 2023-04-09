#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    // Create a stack of integers
    stack<int> st;

    // Push some elements on top stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Print the top element of the stack
    cout << "Top element: " << st.top() << "\n";

    // remove value top stack
    st.pop();

    // Print top element
    cout << "Top element after pop: " << st.top() << "\n";

    // Check stack is empty
    if (st.empty()) {
        cout << "Stack is empty" << "\n";
    } else {
        cout << "Stack is not empty" << "\n";
    }

    // Print the size of the stack
    cout << "Stack size: " << st.size() << "\n";

    return 0;
}
