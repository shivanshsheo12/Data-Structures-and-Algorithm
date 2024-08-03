#include<iostream>
#include<vector>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* convertArr2LL(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void intersectionNode(Node* head1, Node* head2, int count) {
    Node* inter = head2;
    for (int i = 1; i < count && inter != nullptr; i++) {
        inter = inter->next;
    }

    Node* temp = head1;
    while (temp != nullptr && temp->next != nullptr) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        temp->next = inter;
    }
}

Node* findintersection(Node* head1, Node* head2) {
    if (!head1 || !head2) return nullptr;

    Node* t1 = head1;
    Node* t2 = head2;

    while (t1 != t2) {
        t1 = t1 ? t1->next : head2;
        t2 = t2 ? t2->next : head1;
    }

    return t1;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {2, 1};
    vector<int> arr2 = {1, 2, 4, 5, 4, 6, 2};

    Node* head1 = convertArr2LL(arr1);
    Node* head2 = convertArr2LL(arr2);

    intersectionNode(head1, head2, 5);

    Node* intersect = findintersection(head1, head2);
    if (intersect) {
        cout << "Intersection at node with data: " << intersect->data << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
