#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,sum = 0;
    cin>>a;
    int ajay[a];
    cout<<"Enter the Elements inside Arrays"<<endl;
    for(int i = 0; i<a; i++){
        cin>>ajay[i];
    }
    cout<<"Elements Enter by you inside a Arrays"<<endl;
    for(const auto &l: ajay){
        cout<<l<<endl;
    }
    cout<<"Sum of elments which is enter by you inside a arrays"<<endl;
    for(const auto &b : ajay){
        sum+=b;
    }
    cout<<sum<<endl;
    return 0;
}