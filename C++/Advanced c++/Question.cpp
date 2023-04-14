#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cout<<"Enter the size for arrays"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Ener the Element inside the arrays"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Element Enter by you inside the arrays"<<endl;
    for(auto &k:arr){
        cout<<k<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        arr[i]=count++;
    }
    cout<<count<<endl;
    return 0;
}