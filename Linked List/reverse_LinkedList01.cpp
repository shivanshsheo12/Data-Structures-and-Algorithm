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
Node* reverseLL(Node* head){
    Node* prev = nullptr;
    Node* current = head;
    Node* post = head->next;
    while(current!=nullptr){
        if(post == nullptr){
            current->next = prev;
            prev = current;
            current = post;
            break;
        }
        current->next = prev;
        prev = current;
        current = post;
        post = post->next;
    }
return prev;
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

    Node* newHead = reverseLL(head);

    printList(newHead);
    return 0;
}