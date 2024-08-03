#include<iostream>
#include<vector>

using namespace std;
struct node{
    int data;
    node* next;

    node(int data1,node* next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node* convertArr2LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}
int lengthOfLL(node* head){
    int count = 0;
    node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    vector<int> arr = {4,1,3,8,4,5,6};
    node* head = convertArr2LL(arr);
    node* temp = head;
    
    int length = lengthOfLL(head);

    cout << "Length of the LinkedList is : " << length;
}