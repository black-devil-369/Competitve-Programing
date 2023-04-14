#include<bits/stdc++.h>
using namespace std;
class Problem{
    public:
    void code(vector<std::string>v1){
        for(auto &k:v1){
            cout<<k<<endl;
        }
    }
};
// Derive program
int main(){
    int n;
    cout<<"Enter the size for arrays"<<endl;
    cin>>n;
    vector<std::string>v2;
    for(int i=0;i<n; ++i){
        string c;
        cin>>c;
        v2.push_back(c);
    }
    Problem p1;
    p1.code(v2);
    return 0;
}