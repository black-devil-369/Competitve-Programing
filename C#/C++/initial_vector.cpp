#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    // These two line wirte for fast input performance take palce
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // create a empty vector and add element by push_back() method
    int n;
    cout<<"Enter the size for Vector"<<endl;
    cin>>n;
    vector<int>vect1;
    for(int i=1; i<=n; i++){
        vect1.push_back(i);
    }
    for(int x: vect1){
        cout<< x<<endl;
    }
    // Initialize Like Array
    cout<<"By Initialize Like Arrays"<<endl;
    vector<int>vect2{2,3,5,4};
    for(int x:vect2){
        cout<<x<<endl;
    }
    // Initialize From Array
    cout<<"By Initialize From Array"<<endl;
    int arr[] = { 76,85,90,67};
    int k = sizeof(arr)/sizeof(arr[0]);
    vector<int>vect3(arr,arr+k);
    for(int x:vect3){
        cout<<x<<endl;
    }
    cout<<k<<endl;
    // Intializine From Another vector;
    cout<<"Intializing from Another vector"<<endl;
      vector<int> vect4{ 10, 20, 30 };
 
      vector<int> vect5(vect4.begin(), vect4.end());
 
       for (int x : vect5)
        cout << x << " "<<endl;
    
    cout<<" Initialize an array with consecutive numbers using std::iota "<<endl;
    int arr1[5];
    iota(arr1, arr1 + 5, 1);
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " "<<endl;
    }
    return 0;
}