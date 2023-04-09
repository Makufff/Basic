#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* newNode(char data) {
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* buildExpressionTree(string postfix) {
    stack<Node*> s;

    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];
        if (isdigit(c)) {
            Node* node = newNode(c);
            s.push(node);
        } else {
            Node* right = s.top();
            s.pop();
            Node* left = s.top();
            s.pop();
            Node* node = newNode(c);
            node->left = left;
            node->right = right;
            s.push(node);
        }
    }

    Node* root = s.top();
    s.pop();
    return root;
}

string infixToPostfix(string infix) {
    string postfix = "";
    stack<char> s;

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if (isdigit(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && s.top() != '(' && ((c == '*' || c == '/') || (s.top() == '+' || s.top() == '-'))) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

void printExpressions(Node* root) {
    if (root == NULL) return;

    printExpressions(root->left);
    cout << root->data << " ";
    printExpressions(root->right);
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    string infix = "2+3*4";
    string postfix = infixToPostfix(infix);
    Node* root = buildExpressionTree(postfix);

    cout << "Postfix expression: " << postfix << "\n";
    cout << "Infix expression: " << infix << "\n";
    cout << "Prefix expression: ";
    printExpressions(root);

    return 0;
}
