#include<bits/stdc++.h>
using namespace std;
void sumofnumber(int n, int sum){
    for(int i =0; i<n; i++){
        sum = sum+i;
    }
    cout<<sum<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,sum;
    cin>>n>>sum;
    sumofnumber(n,sum);
    return 0;
}