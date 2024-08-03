#include<iostream>
#include<vector>

using namespace std;
// Defining LinkedList Data Structures
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
// Converting Array to linked list
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
// Printing linked list
void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* OddEven(Node* head){
    vector<int> OddEvenArr;
    
    // First pass for odd numbers
    Node* temp = head;
    while(temp != nullptr){
        int value = temp->data;
        OddEvenArr.push_back(value);
        if(temp->next != nullptr) temp = (temp->next)->next;
        else break;
    }

    // Second pass for Even numbers
    temp = head->next;
    while(temp!=nullptr){
        int value = temp->data;
        OddEvenArr.push_back(value);
        if(temp->next != nullptr) temp = (temp->next)->next;
        else break;
    }

    // putting back the values inside array 
    temp = head;
    int i = 0;
    while(temp!=nullptr){
        temp->data = OddEvenArr[i++];
        temp = temp->next;
    }
return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = convertArr2LL(arr);

    Node* newNode = OddEven(head);
    printList(newNode);
}