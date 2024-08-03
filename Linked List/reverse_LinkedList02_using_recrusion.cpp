#include<vector>
#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
return head;
}
Node* reverseLL(Node* prev,Node* current,Node* front){
    if(front == nullptr){
        current->next = prev;
        return current; 
    }
    current->next = prev;
    reverseLL(current,front,front->next);
}
void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {5,2,3,1};
    Node* head = convertArr2LL(arr);
    Node* current = head;
    Node* prev = nullptr;
    Node* front = head->next;
    Node* newHead = reverseLL(prev,current,front);

    printList(newHead);
    return 0;
}