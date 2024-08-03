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
Node* removeNode(Node* head,int NodeValue){
    // if(head == nullptr) return head;
    // if(head->next == nullptr ){
    //     delete head;
    //     return nullptr;
    // }
    Node* temp = head;
    while(temp->data != NodeValue){
        temp = temp->next;
    }
    Node* tempNode;
    (temp->back)->next = temp->next;
    (temp->next)->back = temp->back;
return head;


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

    int NodeValue;
    cout << "Enter Node value: " ;
    cin >> NodeValue;

    Node* newHead = removeNode(head,NodeValue);

    printList(newHead);

}