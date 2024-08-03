#include<iostream>
#include<vector>

using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = prev->next;
    }
return head;
}
Node* AddBeforeTail(Node* head,int NodeVal){
    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node* NewNode = new Node(NodeVal,tail,tail->back);
    (tail->back)->next = NewNode;
    tail->back = NewNode;

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
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2DLL(arr);

    int NodeVal;
    cout << "Enter the Node value you want to add : ";
    cin>>NodeVal;

    Node* newHead = AddBeforeTail(head,NodeVal);

    printList(newHead);

}