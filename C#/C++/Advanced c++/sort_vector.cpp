#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v{3,1,9,7,5,8,4,10,6,2};
    sort(v.begin(), v.end());
    cout<<"Sorted vector element"<<endl;
    for(auto x:v){
        cout<<x<<" ";
    //cout<<endl;
    }
    cout<<" "<<endl;
    cout<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;
    return 0;
}