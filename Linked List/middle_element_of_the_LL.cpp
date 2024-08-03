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
    for(int i = 1 ;i<arr.size() ;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
return head;
}
void intersectionNode(Node* head2,Node* head1,int count){
    int Nodecount = 1;
    Node* inter = head2;
    while(Nodecount != count){
        inter = inter->next;
        Nodecount++;
    }
    Node* temp = head1;
    while(temp != nullptr){
        if(temp->next == nullptr){
            temp->next = inter;
            break;
        }
        temp = temp->next;
    }
}
Node* findintersection(Node* head1,Node* head2){
    Node* temp1;
    Node* temp2 = head2;
    Node* intersect = nullptr;
    while(temp2 != nullptr){
        temp1 = head1;
        while(temp1 != nullptr){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
        }
        temp2 = temp2->next;
    }
    return nullptr;
}
void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr1 = {2,1};
    vector<int> arr2 = {1,2,4,5,4,6,2};

    Node* head1 = convertArr2LL(arr1);
    Node* head2 = convertArr2LL(arr2);
    intersectionNode(head2,head1,5);

    Node* intersect = findintersection(head1,head2);
    cout << intersect->data << endl;
    return 0;
}