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
Node* removeValue(Node* head,int value){
    if(head == nullptr) return head;

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
    return head;
    }

    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr){
        if(temp->data == value){
            prev->next = (prev->next)->next;
            delete temp;
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
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = convertArr2LL(arr);

    int value;
    cout << "Enter the value you want to remove : ";
    cin >> value;

    Node* head1 = removeValue(head,value);
    printList(head1);
}