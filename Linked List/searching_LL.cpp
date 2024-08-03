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
int present_in_LL(node* head,int value){
    node* temp = head;

    while(temp != nullptr){
        if(temp->data == value) return 1;
        temp = temp->next;
    }

    return 0;
}

int main(){
    vector<int> arr = {4,1,3,8};
    node* head = convertArr2LL(arr);
    
    
    int value;
    cout << "Enter the value you want to check : ";
    cin >> value;

    cout << present_in_LL(head,value) << endl;
}