#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<int ,int> mp;
    mp.insert({2,54});
    mp.insert({1,34});
    mp.insert({3,63});
    cout<<"Key\t Element\n";
    for(auto itr = mp.begin(); itr!=mp.end(); ++itr){
        cout<< itr->first
         <<"\t"<<itr->second<<'\n';
    }
    /**
    map<int, int> mp;
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
  
    // does not inserts key 2 with element 20
    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });
  
    // prints the elements
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
    **/
}