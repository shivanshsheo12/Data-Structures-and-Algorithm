#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(float arr[],int size){
    vector<vector<float>> bucket(10,vector<float> ());
    for(int i = 0;i<size;i++){
        int bucketIndex = size*arr[i];
        bucket[bucketIndex].push_back(arr[i]);
    }

    for(int i = 0;i<10;i++){
        if(!bucket.empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
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
    float arr[8] = {0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size = 8;
    bucketSort(arr,size);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}