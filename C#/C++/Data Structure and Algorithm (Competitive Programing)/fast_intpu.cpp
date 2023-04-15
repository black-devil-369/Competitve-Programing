#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>vet1{ {1,5,6}, {7,4,2}, {9,8,3}};
    int m = vet1.size();
    int n = vet1[0].size();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
        cout<<vet1[i][j]<<" ";
        cout<<endl;
    }

}