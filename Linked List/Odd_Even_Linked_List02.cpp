#include<iostream>
#include<vector>

using namespace std;
// Defining LinkedList Data Structures
struct Node
{
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
// Converting Array to linked list
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
// Printing linked list
void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* OddEven(Node* head){
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = head->next;
    while(even != nullptr && even->next != nullptr){
        odd->next = (odd->next)->next;
        even->next = (even->next)->next;
        
        odd = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
return head;
}


int main(){
    vector<int> arr = {2,3,1,4,5,6};
    Node* head = convertArr2LL(arr);

    Node* newNode = OddEven(head);
    printList(newNode);
}