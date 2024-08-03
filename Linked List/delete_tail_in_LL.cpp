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

Node* removeTail(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* temp = head;
    while((temp->next)->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = convertArr2LL(arr);

    cout << head->data << endl;

    Node* head1 = removeTail(head);
    
    Node* temp = head1;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}