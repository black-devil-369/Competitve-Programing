#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
void showdequeue(deque<int>d1){
    // creating a iterator for deque
    deque<int>::iterator it;
    cout<<"Printing the Element which are inside a deque"<<endl;
    for(it = d1.begin();it!=d1.end();++it){
        cout<<*it<<endl;
    }
}
int main(){
    // creating a deque;
    deque<int>d2;
    int n,b;
    cout<<"Enter the size of deque"<<endl;
    cin>>n;
    for(int i=0;i<=n-1;++i){
        cin>>b;
        d2.push_back(b);
    }
    showdequeue(d2);
}
// some function are build in deque stl to perfome some operation
// begin(),end(), cbegin(),cend(),rbegin(), rend(),max_size(),size(),empty(), clear(),earse()
// swap(), push_back(), push_end(), pop_back(),pop_end(), emplace_front(),emplace_end()
//assign()