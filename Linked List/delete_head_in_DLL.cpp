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
Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,head);
        prev->next = temp;
        prev = prev->next;
    }
return head;
}
Node* removeHead(Node* head){
    (head->next)->back = nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;

return head;
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = convertArr2DLL(arr);

    Node* head1 = removeHead(head);
    cout << head1->data << " ";
    return 0;
}