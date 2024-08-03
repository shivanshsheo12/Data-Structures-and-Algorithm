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
Node* convertArr2LL(vector <int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,mover);
        mover->next = temp;
        mover = temp;
    }

return head;
}
Node* deleteOcc(Node* head,int key){
    
    while(head != nullptr && head->data == key){
        Node* delNode = head;
        head = head->next;
        if(head != nullptr){
            head->back = nullptr;
        }
        delete delNode;
    }

    Node* temp = head;
    while(temp != nullptr){
        if(temp->next != nullptr && (temp->next)->data == key){
            Node* delNode = temp->next;
            temp->next = (temp->next)->next;
            if(delNode->next != nullptr){
                (delNode->next->back) = temp;
            }
            delete delNode;
        }
        else{
            temp = temp->next;
        }
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
    vector<int> arr = {10,101,10,4,10,7,10,44,55,33,10};
    Node* head = convertArr2LL(arr);
    Node* newhead = deleteOcc(head,10);
    printList(newhead);
    return 0;
}