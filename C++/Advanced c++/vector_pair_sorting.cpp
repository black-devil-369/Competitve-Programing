#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>vect;
    int arr[] = {39,13,54,41,24,53,14};
    int arr1[] = {34,15,45,89,57,90,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n; i++){
        vect.push_back(make_pair(arr[i],arr1[i]));
    }
    cout<<"The vector Element  appyly before sort\n";
    for(int i =0; i<n; i++){
        cout<<vect[i].first<<" "
            <<vect[i].second<<endl;
    }
    sort(vect.begin(), vect.end());
    cout<<"The vector element is accending order after apply sort method\n";
    for(int i =0; i<n; i++){
        cout<<vect[i].first<<" "
            <<vect[i].second<<endl;
    }
    sort(vect.rbegin(), vect.rend());
    cout<<"The vector of element is decending order after apply sort method\n";
    for(int i=0;i<n; i++){
        cout<<vect[i].first<<" "
            <<vect[i].second<<endl;
    }
    return 0;

}