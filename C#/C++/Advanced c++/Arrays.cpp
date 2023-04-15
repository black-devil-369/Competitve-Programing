#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int, 6>myarrays;
    for(int i =0; i<6; i++){
        cin>>myarrays[i];
    }
    cout<<"Arrays:"<<endl;
    for(auto &k: myarrays){
        cout<<k<<endl;
    }
    return 0;
}