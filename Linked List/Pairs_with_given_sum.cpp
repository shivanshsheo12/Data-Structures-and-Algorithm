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
Node* convertArr2LL(vector <int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,mover);
        mover->next = temp;
        mover = temp;
    }

return head;
}
vector<pair<int,int>> deleteOcc(Node* head,int sum){
    Node* temp1 = head;
    vector<pair<int,int>> pairs;
    while(temp1 != nullptr){
        Node* temp2 = temp1->next;
        while(temp2 != nullptr && temp1->data + temp2->data <= sum){
            if(temp1->data + temp2->data == sum){
                pairs.push_back({temp1->data,temp2->data});
                temp2 = temp2->next;
            }
            else{
                temp2 = temp2->next;
            }
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
    vector<int> arr = {10,101,10,4,10,7,10,44,55,33,10};
    Node* head = convertArr2LL(arr);
    vector<pair<int,int>> pairs = deleteOcc(head,10);
    for (const auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
    return 0;
}