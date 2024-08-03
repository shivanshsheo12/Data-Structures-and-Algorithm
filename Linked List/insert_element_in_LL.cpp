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

Node* insertelement(Node* head,int k,int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        if(k == 1) return newNode;
        else return nullptr; 
    }
    if(k == 1){
        Node* temp = new Node(value,head);
        return temp;
    }
    int count = 1;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        if(count == k){
            prev->next = newNode;
            newNode->next = temp; 
            break;
        }
        prev = temp;
        temp = temp->next;
        count++;
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
    vector<int> arr = {1,2,4,5,6,7};
    Node* head = convertArr2LL(arr);

    int k;
    cout << "Enter the k : ";
    cin >> k;

    int value;
    cout << "Enter the value of new node: ";
    cin >> value;

    Node* newhead = insertelement(head,k,value);   

    printList(newhead);     
}