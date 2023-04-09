#include<iostream> 
using namespace std; 

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if (root == NULL) return NULL;
    if (root == p || root == q) return root;
    Node* left = lowestCommonAncestor(root->left, p, q);
    Node* right = lowestCommonAncestor(root->right, p, q);
    if (left != NULL && right != NULL) return root;
    return (left != NULL) ? left : right;
}

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    // Find the lowest common ancestor of nodes 4 and 5
    Node* lca = lowestCommonAncestor(root, root->left->left, root->left->right);
    cout << "Lowest common ancestor of nodes 4 and 5: " << lca->data << "\n";

    // Find the lowest common ancestor of nodes 4 and 6
    lca = lowestCommonAncestor(root, root->left->left, root->right->left);
    cout << "Lowest common ancestor of nodes 4 and 6: " << lca->data << "\n";

    // Find the lowest common ancestor of nodes 2 and 5
    lca = lowestCommonAncestor(root, root->left, root->left->right);
    cout << "Lowest common ancestor of nodes 2 and 5: " << lca->data << "\n";

    return 0;
}
