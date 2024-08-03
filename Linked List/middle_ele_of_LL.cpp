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
Node* middleNode(Node* head){
    // counting number of nodes
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }

    // reaching to middle node
    int middle = (count/2) + 1;
    temp = head;
    while(temp!=nullptr){
        middle--;
        if(middle == 0){
            return temp;
        }
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = convertArr2LL(arr);
    Node* middle = middleNode(head);

    cout << middle->data << endl;
}