#include<bits/stdc++.h>
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    vector<vector<int> >vect1{ {3,21,5}, {6,2,1}, {9,0,7} };
    int m = vect1.size();
    int n = vect1[0].size();
    cout<<"Element of Vector before sorting"<<endl;
    for(int i=0;i<m; i++){
        for(int j=0;j<n; j++)
            cout<<vect1[i][j]<<" ";
        cout<<endl;
    }
    sort(vect1[0].begin(),vect1[0].end());
    cout<<"Element of vector After Sorting"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<vect1[i][j]<<" ";
        cout<<endl;
    }
    cout<<"By new Method"<<endl;
    for(int i =0; i<vect1.size(); i++){
        for(int j =0;j<vect1[i].size(); j++)
        {
            cout<<vect1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Another New one mehtod"<<endl;
    for(vector<int>vet:vect1){
        for(int x:vet){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}