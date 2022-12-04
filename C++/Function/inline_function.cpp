#include<bits/stdc++.h>
using namespace std;
// inline function declare
inline void cube(){ 
    int b;
    cin>>b;
    for(int i=1;i<=b;i++){
        if(i%2==0){
            if(i%7==0){
                cout<<i<<endl;
            }
        }
    }
}
int main(){
    cube();
    return 0;
}