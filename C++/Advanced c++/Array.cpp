#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[6] = {1,3,6,4};
    int n,sum = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout<<"Enter the size for Arrays:"<<endl;
    cin>>n;
    int ajay[n];
    cout<<"Enter the Element inside a Arrays:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>ajay[i];
    }
    cout<<"Elments Enter by you inside a Arrays:"<<endl;
    for(int i =0; i<n; i++){
        cout<<ajay[i]<<endl;
    }
    cout<<"Sum of Elements inside a Arrays:"<<endl;
    for(const auto &j: ajay){
        sum = sum + j;
    }
    cout<<sum<<endl;
    // arr[] print 
    for(auto &k: arr){
        cout<<k<<endl;
    }
    for(int i=0;i<6; i++){
        cout<<"Address of arr["<<i<<"]:"<<&arr<<endl;
    }
    return 0;
    
}