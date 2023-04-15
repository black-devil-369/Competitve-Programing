#include<bits/stdc++.h>
using namespace std;
int main(){
    //creating a heap by using of vector
   // vector<int>v1;
    vector<long double>v1;
    int n;
    cout<<"Enter the size for vector:"<<endl;
    cin>>n;
    cout<<"Enter the element inside a heap"<<endl;
    for(int i=1;i<=n;++i){
        cout<<"Push the element at index of :"<<i<<endl;
        long double b;
        cin>>b;
        v1.push_back(b);
    }
    cout<<"Element Enter by you for vector"<<endl;
    for(auto &k:v1){
        cout<<k<<endl;
    }
    //converting vector into heap
    //using make_heap()
    make_heap(v1.begin(),v1.end());
    cout<<"Printing the maximum element of heap is"<<endl;
    cout<<v1.front()<<endl;
    return 0;
}