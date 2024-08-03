#include <iostream>
#include <vector>

using namespace std;

// Defining LinkedList Data Structures
struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

// Converting Array to Linked List
Node* convertArr2LL(vector<int> &arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Printing Linked List
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Counting Occurrences and Printing the Vector
void countOccurrences(Node* head) {
    Node* temp = head;
    vector<int> arr = {0, 0, 0};  // Initialize the vector with zeros

    // Count the occurrences of each value in the linked list
    while (temp != nullptr) {
        if (temp->data < arr.size()) {
            arr[temp->data]++;
        } else {
            // Handle out-of-bound values if necessary
            cout << "Value " << temp->data << " is out of bounds" << endl;
        }
        temp = temp->next;
    }

    // Print the frequency count
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 2, 0, 1, 0, 2};  // Example array
    Node* head = convertArr2LL(arr);

    cout << "Original List: ";
    printList(head);

    cout << "Frequency Count: ";
    countOccurrences(head);

    return 0;
}
