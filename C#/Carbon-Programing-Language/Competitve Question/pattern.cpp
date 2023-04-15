#include<bits/stdc++.h>
using namespace std;
class Pattern{
    protected:
    int n;
    //cin>>n;
};
class Loop:public Pattern{
    public:
    void pattern(int a){
        n = a;
        for(int i =1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(j==i-j){
                    cout<<" ";
                }
                else
                cout<<" * ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Loop l1;
    l1.pattern(6);
}