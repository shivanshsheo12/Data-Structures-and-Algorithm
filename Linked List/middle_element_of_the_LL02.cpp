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
Node* collisionpoint(Node* t1,Node* t2,int d){
    while(d){
        d--;
        t2 = t2->next;
    }
    while(t1 != t2){
        t1 = t1->next;
        t2 = t2->next;
    }
return t1;
}
Node* findintersection(Node* head1,Node* head2){
    Node* t1 = head1;
    int n1 = 0;
    Node* t2 = head2;
    int n2 = 0;
    while(t1!=nullptr){
        n1++;
        t1 = t1->next;
    }
    while(t2!=nullptr){
        n2++;
        t2 = t2->next;
    }
    if(n1<n2){
        Node* value = collisionpoint(head1,head2,n2-n1);
        return value;
    }
    else{
        Node* value = collisionpoint(head2,head1,n1-n2);
        return value;
    }
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
    intersectionNode(head1,head2,5);

    Node* intersect = findintersection(head1,head2);
    cout << intersect->data << endl;
    return 0;
}