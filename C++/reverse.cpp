#include<bits/stdc++.h>
using namespace std;
 void reverseStr(string &str1){
        int n = str1.length();
        for(int i=0; i<n/2; i++)
        swap(str1[i],str1[n-i-1]);
        }
int main(){
    string str1;
    cin>>str1;
    reverseStr(str1);
    cout<<str1<<endl;
    return 0;
}