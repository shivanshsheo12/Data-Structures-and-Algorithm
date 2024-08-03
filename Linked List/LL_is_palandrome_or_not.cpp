#include<vector>
#include<iostream>

using namespace std;
struct Node
{
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
Node* reverseLL(Node* head){
    Node* prev = nullptr;
    Node* current = head;
    Node* front = current->next;
    while (current != nullptr)
    {
        if(front == nullptr){
            current->next = prev;
            return current;
        }
        current->next = prev;
        prev = current;
        current = front;
        front = front->next;
    }
}
bool ispalandrome(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* mid = slow;

    Node* tail = reverseLL(mid->next);
    while(tail != nullptr){
        if(tail->data == head->data){
            tail = tail->next;
            head = head->next;
        }
        else{
            reverseLL(tail);
            return false;
        }
    }
return true;
}

int main(){
    vector<int> arr = {1,2,3,1,2,3};
    Node* head = convertArr2LL(arr);
    if(ispalandrome(head)){
        cout << "Its a palandrome" << endl;
    }
    else{
        cout << "Not a palandrome" << endl;
    }
    
    return 0;
}