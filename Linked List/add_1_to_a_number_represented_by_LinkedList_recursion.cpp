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
int additionof1(Node* temp,int carry){
    if(temp->next == nullptr){
        int sum = temp->data + carry;
        temp->data = sum%10;
        carry = sum/10;
        return carry;
    }
    int newCarry = additionof1(temp->next,carry);
    int sum = temp->data + newCarry;
    temp->data = sum%10;
    return sum/10;
}
Node* addonetoLL(Node* head){
    int carry = 1;
    Node* temp = head;
    int value = additionof1(temp,carry);
    if(value != 0){
        Node* newNode = new Node(value,head);
        return newNode;
    }
    else return head;
}
int main(){
    vector<int> arr  = {9,9,9,9,9};
    Node* head = convertArr2LL(arr);
    
    Node* newHead = addonetoLL(head);
    printList(newHead);

    return 0;
}