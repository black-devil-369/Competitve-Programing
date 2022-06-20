/**
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void func(vector<int>&vect){vect.push_back(38); }
int main(){
    vector<int>vect;
    vect.push_back(10);
    vect.push_back(40);

    func(vect);
    for(int i =0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}
**/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void func(vector<int>&c){
    int a ,b;
    cout<<"Enter the size of vector"<<endl;
    cin>>a;
    cout<<"Enter the Element of vector"<<endl;
    for(int i=0; i<a; i++){
        cin>>b;
        c.push_back(b);
    }
    cout<<"Element Enter by you"<<endl;
    for(auto &p:c){
        cout<<p<<" ";
    }
    cout<<endl;
    sort(c.begin(), c.end());
    cout<<"Sorter vector elements are"<<endl;
    for(auto &k:c){
        cout<<k<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>c;
    cout<<"List of Element"<<endl;
    func(c);
    return 0;
}