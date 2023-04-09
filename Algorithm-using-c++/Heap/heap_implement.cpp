#include <iostream>
#include <vector>

using namespace std;

void siftUp(vector<int>& heap, int index) {
    while (index > 0 && heap[index] > heap[(index - 1) / 2]) {
        swap(heap[index], heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

void siftDown(vector<int>& heap, int index) {
    int maxIndex = index;
    int leftChild = 2 * index + 1;
    if (leftChild < heap.size() && heap[leftChild] > heap[maxIndex]) {
        maxIndex = leftChild;
    }
    int rightChild = 2 * index + 2;
    if (rightChild < heap.size() && heap[rightChild] > heap[maxIndex]) {
        maxIndex = rightChild;
    }
    if (index != maxIndex) {
        swap(heap[index], heap[maxIndex]);
        siftDown(heap, maxIndex);
    }
}

void insert(vector<int>& heap, int value) {
    heap.push_back(value);
    siftUp(heap, heap.size() - 1);
}

int getMax(const vector<int>& heap) {
    return heap[0];
}

int deleteMax(vector<int>& heap) {
    int max = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    siftDown(heap, 0);
    return max;
}

void heapify(vector<int>& heap) {
    for (int i = heap.size() / 2; i >= 0; i--) {
        siftDown(heap, i);
    }
}

void increaseKey(vector<int>& heap, int index, int newValue) {
    heap[index] = newValue;
    siftUp(heap, index);
}

void decreaseKey(vector<int>& heap, int index, int newValue) {
    heap[index] = newValue;
    siftDown(heap, index);
}

int main() {
    vector<int> heap;

    insert(heap, 5);
    insert(heap, 10);
    insert(heap, 3);
    insert(heap, 8);
    insert(heap, 1);

    cout << "Max element: " << getMax(heap) << endl;

    deleteMax(heap);

    cout << "Max element: " << getMax(heap) << endl;

    heapify(heap);

    increaseKey(heap, 2, 15);

    decreaseKey(heap, 1, 2);

    return 0;
}
