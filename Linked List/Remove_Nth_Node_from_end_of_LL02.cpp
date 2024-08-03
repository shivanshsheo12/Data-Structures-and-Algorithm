#include<iostream>
#include<vector>

using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data0,Node* next0){
        data = data0;
        next = next0;
    }
    Node(int data0){
        data = data0;
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
Node* removeNthNode(Node* head,int pos){
    Node* fast = head;
    for(int i = 0;i<pos;i++) fast = fast->next;
    if(fast == nullptr) return head->next; 
    Node* slower = head;
    while(fast->next != nullptr){
        slower = slower->next;
        fast = fast->next;
    }
    Node* deleNode = slower->next;
    slower->next = (slower->next)->next;
    delete deleNode;
return head;
}
void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    int pos;
    cout << "Enter the position of the node form end : ";
    cin >> pos;
    Node* newNode = removeNthNode(head,pos);
    printList(newNode);
    return 0;
}