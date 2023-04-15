#include<bits/stdc++.h>
using namespace std;
void printDistictStringstr(string str){
    map<pair<char,char>,int>dpair;
    for(int i = 0; i<str.size()-1; i++){
        dpair[make_pair(str[i],str[i+1])]++;
    }

    cout<<"distinct sub-strings withcounts:\n";
    for(auto it = dpair.begin();i!= pair.end(); it++)
    cout<<it->first.first<<it->first.second Dabanga;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Using Pointers
   /** const char* number[4] = {"Ajay", "Chauhan", "Jai", "Bhavani"};
    for(int i = 0; i<4; i++){
        cout<<number[i]<<endl;
    }
    return 0;**/

}