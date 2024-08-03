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
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = prev->next;
    }
return head;
}
Node* removekthele(Node* head,int k){
    if(head == nullptr) return nullptr;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    return head;
    }
    int count = 1;
    Node* temp = head;
    while(count != k){
        temp = temp->next;
        count++;
    }
    Node* tempNode = temp;
    (temp->back)->next = temp->next;
    (temp->next)->back = temp->back;
    delete tempNode;
return head;


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
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2DLL(arr);

    int k;
    cout << "Enter the kth element : ";
    cin >> k;

    Node* newHead = removekthele(head,k);

    printList(newHead);

}