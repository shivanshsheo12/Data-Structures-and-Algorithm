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

Node* removeKthElement(Node* head,int k){
    if(k<=0 || head == nullptr) return head;
    int count = 1;
    Node* mover = head;

    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    return head;
    }

    while(count != k - 1){
        mover = mover->next;
        count++;
    }

    Node* temp = mover->next;
    mover->next = (mover->next)->next;
    delete temp;

return head;
}

void printList(Node* head){
    Node*temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = convertArr2LL(arr);

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    Node* head1 = removeKthElement(head,k);

    printList(head1);

}