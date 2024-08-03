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
Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ;i<arr.size() ;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
return head;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* reverseLL(Node* head){
    Node* current = head;
    Node* prev = nullptr;
    Node* front = current->next;
    while(current!=nullptr){
        if(front==nullptr){
            current->next = prev;
            return current;
        }
        current->next = prev;
        prev = current;
        current = front;
        front = front->next;
    }
}
Node* check;
Node* addonetoLL(Node* head){
    Node* reverseList = reverseLL(head);
    Node* temp = reverseList;
    int carry = 1;
    while(temp != nullptr){
        if(temp->next == nullptr){
            check = temp;
        }
        int sum = carry;
        sum += temp->data;
        temp->data = sum%10;
        temp = temp->next;
        carry = sum/10;
    }
    if(carry != 0){
        Node* newNode = new Node(carry);
        check->next = newNode;
    }
    Node* resultNode = reverseLL(reverseList);
    
return resultNode;
}
int main(){
    vector<int> arr = {9,9};
    Node* head = convertArr2LL(arr);
    
    Node* newHead = addonetoLL(head);
    printList(newHead);

    return 0;
}