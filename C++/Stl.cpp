#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>fowrard;
    int n ,a;
    cout<<"Enter the size for list"<<endl;
    cin>>n;
    cout<<"Enter the Elment iside a List"<<endl;
    for(int i=0; i<n; i++){
        cin>>a;
        fowrard.push_back(a);
    }
    cout<<"Element enter by you inside a list"<<endl;
    for(auto it = fowrard.begin();it!=fowrard.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    fowrard.sort();
    cout<<"Element of list after sorted"<<endl;
    for(auto &x:fowrard){
        cout<<x<<" ";
    }
    cout<<endl;
    fowrard.reverse();
    cout<<"Element of list after apply reverse"<<endl;
    for(auto &y:fowrard){
        cout<<y<<" ";
    }
    cout<<endl;


}
