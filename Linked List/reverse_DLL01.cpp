// #include<iostream>
// #include<vector>

// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node* back;

//     Node(int data1,Node* next1,Node* back1){
//         data = data1;
//         next = next1;
//         back = back1;
//     }
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//         back = nullptr;
//     }
// };
// Node* convertArr2LL(vector<int> &arr){
//     Node* head = new Node(arr[0]);
//     Node* mover = head;
//     for(int i = 1;i<arr.size();i++){
//         Node* temp = new Node(arr[i],nullptr,mover);
//         mover->next = temp;
//         mover = mover->next;
//     }
// return head;
// }

// Node* reverseList(Node* head){
//     Node* temp = head;
//     vector<int> stack;
//     while(temp != nullptr){
//         stack.push_back(temp->data);
//         temp = temp->next;
//     }
//     temp = head;
//     while(temp != nullptr){
//         temp->data = stack.top();
//         stack.pop();
//         temp = temp->next;
//     // }
//     return head;
// }

// void printList(Node* head){
//     Node* temp = head;
//     while(temp!=nullptr){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main(){
//     vector<int> arr = {4,2,3,1};
//     Node* head = convertArr2LL(arr);


//     printList(head);

//     Node* newHead = reverseList(head);
//     cout << endl;
//     cout << "Reversed LL: " << endl;
    
//     printList(newHead);
//     return 0;
// }