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
Node* insertele(Node* head,int value,int elevalue){
    
    if(head->data == value){
        Node* newNode = new Node(elevalue,head);
        return newNode;
    }

    Node* newNode = new Node(elevalue);
    Node* prev = nullptr;
    Node* temp = head;

    while(temp != nullptr){
        if(temp->data == value){
            prev->next = newNode;
            newNode->next = temp;
            break;
        }
        prev = temp;
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
    vector<int> arr = {1,2,4,5,6,7};
    Node* head = convertArr2LL(arr);

    int value;
    cout << "Enter the element before whom you want to insert : ";
    cin >> value;

    int elevalue;
    cout<< "Enter the value you want to insert: ";
    cin >> elevalue;
    Node* head1 = insertele(head,value,elevalue);

    printList(head1);
    return 0;
}