#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Arrays"<<endl;
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout<<"Arrays Elements Entered by you"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}