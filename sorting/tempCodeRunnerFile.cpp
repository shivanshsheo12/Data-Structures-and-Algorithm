#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void bucketSort(float arr[],int size){
    vector<vector<float>> bucket(10,vector<float>());
    float max_ele = arr[0];
    float min_ele = arr[0];
    for(int i = 0;i<size;i++){
        max_ele = max(max_ele,arr[i]);
        min_ele = min(min_ele,arr[i]);
    }
    float range = (max_ele - min_ele)/10.0;

    for(int i = 0;i<=9;i++){
        int index = (arr[i] - min_ele)/10.0;
        if(index>=10) index = 9;
        bucket[index].push_back(arr[i]);
    }
    for(int i = 0;i<10;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    int k = 0;
    while(k<size){
    for(int i = 0;i<10;i++){
        for(int j = 0;j<bucket[i].size();j++){
            arr[k++] = bucket[i][j]; 
        }
    }
    }
}

int main(){
    float arr[8] = {6.13,8.45,0.12,1.89,4.75,2.63,7.85,10.39};
    int size = 8;
    bucketSort(arr,size);

    for(int i = 0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}