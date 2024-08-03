#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* next;

public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

int main() {
    // vector<int> arr = {2, 5, 8, 7};
    // Node* y = new Node(arr[0]);
    // cout << y << '\n';         // Print the memory address of the node
    // cout << y->data << '\n';   // Print the data value of the node, which is 2
    // cout << y->next << '\n';   // Print the value of the next pointer, which is nullptr (0 or (nil))

    // If new keyword is not used.
    vector<int> arr = {2,5,8,7};
    Node y = Node(arr[0],nullptr); // Just creating an object of class object and initializing using constructor
    cout << y.next << endl; // variables inside the method can be used
    cout << y.data << endl; 
    
    return 0;
}
