/**
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>x;
    int a,n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    cout<<"Enter the Element inside a vector"<<endl;
    for(int i = 0; i<n; i++){
        cin>>a;
        x.push_back(a);
    }
    cout<<"Element Enter by you in vector"<<endl;
    for( auto c:x){
        cout<<" "<<c<<endl;
    }
}
**/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    // if user are not wants to declare size of vector
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cout<<"Enter the size of vector"<<endl;
    cin>>x;
    vector<int>z;
    cout<<"Enter the element inside a vector"<<endl;
    for(int i=0;i<x;i++){
        cin>>y;
        z.push_back(y);
    }
    cout<<"Element inside a vector Enter by You"<<endl;
    for(auto &j:z){
        cout<<j<<" ";
    }
    cout<<endl;
    sort(z.begin(),z.end());
    cout<<"Sorted Vector Elements"<<endl;
    for(auto &k:z){
        cout<<k<<" ";
    }
    cout<<endl;
    cout<<"List of Even Element inside a vector"<<endl;
    for(auto it = z.begin(); it!=z.end();++it){
        if (*it%2==1){
            z.erase(it);
            it--;
        }
    }
    for(auto it = z.begin(); it!=z.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;

}