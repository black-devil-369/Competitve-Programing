#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of Arrays"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"List of Arrays elements"<<endl;
    for(int i=0; i<n; i++){
        cout<< i<<" Index of Elements is = "<<arr[i]<<endl;
    }
}