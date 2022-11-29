#include<bits/stdc++.h>
using namespace std;
void selectionsort(int*arr,int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx = i;
        for(j = i+1;j<n;j++){
        if(arr[j]<arr[min_idx]){
            min_idx = j;
            }
        if(min_idx!=i){
            swap(arr[min_idx],arr[i]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size fo arrays"<<endl;
    cin>>size;
    int arr[size];
    for(int i = 0;i<size; i++){
        cin>>arr[i];
    }
    int k = sizeof(arr)/sizeof(int);
    selectionsort(arr,k);
}