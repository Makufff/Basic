#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void deleteNode(int value) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == value) {
            if (prev == NULL) {
                head = curr->next;
            } else {
                prev->next = curr->next;
            }
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

int search(int value) {
    int index = 0;
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == value) {
            return index;
        }
        curr = curr->next;
        index++;
    }
    return -1;

void print() {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    print();
    deleteNode(20);
    print();
    cout << search(30) << "\n";
    cout << search(50) << "\n";
    return 0;
}
