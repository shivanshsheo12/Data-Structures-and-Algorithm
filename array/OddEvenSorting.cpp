#include<iostream>
#include<vector>

using namespace std;
void sorting(vector<int> &v){
    int lft_ptr = 0;
    int right_ptr  = v.size() - 1;
    
    while(right_ptr>lft_ptr){
        if(v[lft_ptr]%2 != 0 && v[right_ptr]%2 == 0){
            int temp = v[right_ptr];
            v[right_ptr] = v[lft_ptr];
            v[lft_ptr] = temp;
            right_ptr--;
            lft_ptr++;
        }
        if(v[lft_ptr]%2 == 0){
            lft_ptr++;
        }
        if(v[right_ptr]%2 != 0){
            right_ptr--;
        }
    }
}

int main(){
    vector<int> v;

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }

    sorting(v);
    
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}