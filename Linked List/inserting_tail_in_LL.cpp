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

Node* insertTail(Node* head,int value){
    Node* newTail = new Node(value);
    Node* temp = head;
    while(temp != nullptr){
        if(temp->next == nullptr){
            temp->next = newTail;
            break;
        }
        temp = temp->next;
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

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = convertArr2LL(arr);

    int value;
    cout << "Enter the value : ";
    cin >> value;

    Node* newTail = insertTail(head,value);   

    printList(newTail);     
}