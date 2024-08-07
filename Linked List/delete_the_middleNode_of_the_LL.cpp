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
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
return head;
}
Node* deletemiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while((fast->next)->next != nullptr && ((fast->next)->next)->next != nullptr){
        slow = slow->next;
        fast = (fast->next)->next;
    }
    Node* temp = slow->next;
    slow->next = (slow->next)->next;
    delete temp;
return head;
}
void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr1 = {1,2,3,4,5};
    Node* head = convertArr2LL(arr1);

    Node* newNode = deletemiddle(head);
    printList(newNode);
} 