#include<iostream>
#include<vector>

using namespace std;
void sortElement(vector<int> &v){
    int lft_ptr = 0;
    int right_ptr = v.size() - 1;
    while(right_ptr>lft_ptr){
        if(v[lft_ptr] == 1 && v[right_ptr] == 0){
            v[lft_ptr] = 0;
            v[right_ptr] = 1;
            lft_ptr++;
            right_ptr--;
        }
        if(v[lft_ptr] == 0){
            lft_ptr++;
        }
        if(v[right_ptr]== 1){
            right_ptr--;
        }

    }
    
    return;
}

int main(){
    vector<int> v;

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    sortElement(v);

    for(int i = 0;i<n;i++){
        cout<<v[i];
    }


}