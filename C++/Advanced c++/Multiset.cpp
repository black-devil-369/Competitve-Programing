#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,c;
    multiset<int>b;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout<<"Enter the size of Multiset:"<<endl;
    cin>>a;
    cout<<"Enter the Elements inside a Multiset:"<<endl;
    for(int i=1; i<=a; i++){
        cin>>c;
        b.insert(c);
    }
    cout<<"Elements Enter by you inside a Multiset:"<<endl;
    for(const auto &k: b){
        cout<<k<<endl;
    }

}