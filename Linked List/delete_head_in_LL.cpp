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

Node *convertArr2LL(vector <int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node* deletehead(Node* head){
    if(head == nullptr) return head;
    Node* temp = head; 
    head = head->next;
    delete temp;

return head;
}

int main(){
    vector<int> arr = {2,4,38,13};
    Node* head = convertArr2LL(arr);
    head = deletehead(head);

    cout << "Head data: " << head->data;
}