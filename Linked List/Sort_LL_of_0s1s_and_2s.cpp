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
Node* sortedList(Node* head){
    Node* temp = head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    while(temp != nullptr){
        if(temp->data == 0) count0++;
        else if(temp->data == 1) count1++;
        else count2++;
        temp = temp->next;
    }
    temp = head;
    while(temp != nullptr){
        if(count0 != 0) {
            temp->data = 0;
            count0--;
        }
        else if(count1 != 0){ 
            temp->data = 1;
            count1--;
        }
        else {
            temp->data = 2;
            count2--;
        }
        temp = temp->next;
    }
return head;
}
void printList(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {0,0,1,2,0,2,1};
    Node* head = convertArr2LL(arr);

    Node* newNode = sortedList(head);
    printList(newNode);
    return 0;
}