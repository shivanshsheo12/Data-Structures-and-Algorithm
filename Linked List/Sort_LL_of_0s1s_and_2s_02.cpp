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
Node* sortedList(Node* head){
    Node* temp = head;
    Node* zerosHead = new Node(-1);
    Node* onesHead = new Node(-1);
    Node* twosHead = new Node(-1);

    Node * zero = zerosHead;
    Node* ones = onesHead;
    Node* two = twosHead;

    while(temp != nullptr){
        if(temp->data == 0){
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->data == 1){
            ones->next = temp;
            ones = ones->next;
        }
        else{
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next = (onesHead->next) ? onesHead->next : twosHead->next;
    ones->next = twosHead->next;
    two->next = nullptr;
return zerosHead->next;
}
void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {1,0,1,2,0,2,1};
    Node* head = convertArr2LL(arr);

    Node* newNode = sortedList(head);
    printList(newNode);
    return 0;
}