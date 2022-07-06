#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int>mymap;
    int a,b;
    cin>>a;
    cout<<"Enter the Element inside a mpa:"<<endl;
    for(int i = 1; i<=a; i++){
        for(int j =1; j<=a; j++){
            cin>>b;
            mymap.insert(b);
        }
    }
    cout<<"Key\t Element\n";
    for(auto itr = mymap.begin(); itr != mymap.end(); ++itr){
        cout<<itr->first
        << "\t"<<itr->second<<"\n";
    }
}