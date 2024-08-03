#include<iostream>
#include<vector>

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
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
return head;
}
Node* addLL(Node* head1,Node* head2){
    Node* t1 = head1;
    Node* t2 = head2;
    Node* dummyNode = new Node(-1);
    Node* current = dummyNode;
    int carry = 0;
    while(t1 != nullptr || t2 != nullptr){
        int sum = carry;
        if(t1!=nullptr) sum +=t1->data;
        if(t2!=nullptr) sum +=t2->data;
        Node* newNode = new Node(sum%10);
        carry = sum/10;
        current->next = newNode;
        current = current->next;
        if(t1 != nullptr) t1 = t1->next;
        if(t2 != nullptr) t2 = t2->next;
    }
    if (carry != 0) {
        Node* newNode = new Node(carry);
        current->next = newNode;
    }

return dummyNode->next;
}
void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){ 
    vector<int> arr1 = {3,5};
    vector<int> arr2 = {4,5,9,9};
    Node* head1 = convertArr2LL(arr1);
    Node* head2 = convertArr2LL(arr2);

    Node* addedList = addLL(head1,head2);
    printList(addedList);

    return 0;
}