#include<bits/stdc++.h>
using namespace std;
void factorial(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"Foctorial of : "<<n<<endl<<fact<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    factorial(n);
}