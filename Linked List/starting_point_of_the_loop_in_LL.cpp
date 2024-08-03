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
void convertLoopList(Node* head1,Node* head2){
    Node* temp2 = head2;
    while(temp2 != nullptr){
        if(temp2->next == nullptr){
            break;
        }
        temp2 = temp2->next;
    }
    temp2->next = head2;

    Node* temp1 = head1;
    while(temp1 != nullptr){
        if(temp1->next == nullptr){
            break;
        }
        temp1 = temp1->next;
    }
    temp1->next = head2;
}
Node* startingNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        
        slow = slow->next;
        fast = (fast->next)->next;
        if(fast == slow){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
return nullptr;
}
int main(){
    vector<int> arr1 = {1,2};
    vector<int> arr2 = {3,4,5,6,7,8,9};
    Node* head1 = convertArr2LL(arr1);
    Node* head2 = convertArr2LL(arr2);
    convertLoopList(head1,head2);

    Node* startNode = startingNode(head1);
    cout << startNode->data << endl;
}