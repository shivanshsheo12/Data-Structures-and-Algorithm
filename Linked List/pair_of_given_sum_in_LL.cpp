#include<iostream>
#include<vector>

using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int data1,Node* next1,Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
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
vector<pair<int,int>> removeKeys(int key,Node* head){
    vector<pair<int,int>> pairs;
    Node* temp1 = head;
    Node* temp2 = head->next;
    while(temp1 != nullptr){
        temp2 = temp1->next;
        while(temp2 != nullptr){
            if(temp1->data + temp2->data == key){
                pairs.push_back({temp1->data,temp2->data});
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
return pairs;
}
void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {1,8,2,3,5,6,4};
    Node* head = convertArr2LL(arr);

    int key;
    cout << "Enter the value : ";
    cin >> key;

    vector<pair<int,int>> pairs  = removeKeys(key,head);
    
    for (const auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

}